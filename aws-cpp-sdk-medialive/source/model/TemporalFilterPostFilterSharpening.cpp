﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/TemporalFilterPostFilterSharpening.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace TemporalFilterPostFilterSharpeningMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        TemporalFilterPostFilterSharpening GetTemporalFilterPostFilterSharpeningForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return TemporalFilterPostFilterSharpening::AUTO;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TemporalFilterPostFilterSharpening::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return TemporalFilterPostFilterSharpening::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemporalFilterPostFilterSharpening>(hashCode);
          }

          return TemporalFilterPostFilterSharpening::NOT_SET;
        }

        Aws::String GetNameForTemporalFilterPostFilterSharpening(TemporalFilterPostFilterSharpening enumValue)
        {
          switch(enumValue)
          {
          case TemporalFilterPostFilterSharpening::AUTO:
            return "AUTO";
          case TemporalFilterPostFilterSharpening::DISABLED:
            return "DISABLED";
          case TemporalFilterPostFilterSharpening::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemporalFilterPostFilterSharpeningMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
