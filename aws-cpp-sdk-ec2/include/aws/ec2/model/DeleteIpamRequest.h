﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DeleteIpamRequest : public EC2Request
  {
  public:
    DeleteIpamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIpam"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteIpamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline DeleteIpamRequest& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline DeleteIpamRequest& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline DeleteIpamRequest& WithIpamId(const char* value) { SetIpamId(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
