﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The SMS text message multi-factor authentication (MFA) configuration
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SmsMfaConfigType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SmsMfaConfigType
  {
  public:
    SmsMfaConfigType();
    SmsMfaConfigType(Aws::Utils::Json::JsonView jsonValue);
    SmsMfaConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }

    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }

    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::move(value); }

    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }

    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline SmsMfaConfigType& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline SmsMfaConfigType& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(std::move(value)); return *this;}

    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in. The message must contain the ‘{####}’ placeholder, which is
     * replaced with the code. If the message isn't included, and default message will
     * be used.</p>
     */
    inline SmsMfaConfigType& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}


    /**
     * <p>The SMS configuration.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::move(value); }

    /**
     * <p>The SMS configuration.</p>
     */
    inline SmsMfaConfigType& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>The SMS configuration.</p>
     */
    inline SmsMfaConfigType& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet;

    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
