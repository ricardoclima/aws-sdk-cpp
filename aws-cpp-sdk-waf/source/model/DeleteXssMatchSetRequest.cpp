/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/model/DeleteXssMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteXssMatchSetRequest::DeleteXssMatchSetRequest() : 
    m_xssMatchSetIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false)
{
}

Aws::String DeleteXssMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_xssMatchSetIdHasBeenSet)
  {
   payload.WithString("XssMatchSetId", m_xssMatchSetId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteXssMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.DeleteXssMatchSet"));
  return headers;

}



