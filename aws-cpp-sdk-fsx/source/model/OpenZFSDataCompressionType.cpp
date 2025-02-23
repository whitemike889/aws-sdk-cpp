﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSDataCompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace OpenZFSDataCompressionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");


        OpenZFSDataCompressionType GetOpenZFSDataCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return OpenZFSDataCompressionType::NONE;
          }
          else if (hashCode == ZSTD_HASH)
          {
            return OpenZFSDataCompressionType::ZSTD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenZFSDataCompressionType>(hashCode);
          }

          return OpenZFSDataCompressionType::NOT_SET;
        }

        Aws::String GetNameForOpenZFSDataCompressionType(OpenZFSDataCompressionType enumValue)
        {
          switch(enumValue)
          {
          case OpenZFSDataCompressionType::NONE:
            return "NONE";
          case OpenZFSDataCompressionType::ZSTD:
            return "ZSTD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenZFSDataCompressionTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
