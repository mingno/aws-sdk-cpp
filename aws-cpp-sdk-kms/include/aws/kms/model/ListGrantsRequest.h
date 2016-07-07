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
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API ListGrantsRequest : public KMSRequest
  {
  public:
    ListGrantsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>When paginating results, specify the maximum number of items to return in the
     * response. If additional items exist beyond the number you specify, the
     * <code>Truncated</code> element in the response is set to true.</p> <p>This value
     * is optional. If you include a value, it must be between 1 and 100, inclusive. If
     * you do not include a value, it defaults to 50.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>When paginating results, specify the maximum number of items to return in the
     * response. If additional items exist beyond the number you specify, the
     * <code>Truncated</code> element in the response is set to true.</p> <p>This value
     * is optional. If you include a value, it must be between 1 and 100, inclusive. If
     * you do not include a value, it defaults to 50.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>When paginating results, specify the maximum number of items to return in the
     * response. If additional items exist beyond the number you specify, the
     * <code>Truncated</code> element in the response is set to true.</p> <p>This value
     * is optional. If you include a value, it must be between 1 and 100, inclusive. If
     * you do not include a value, it defaults to 50.</p>
     */
    inline ListGrantsRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline ListGrantsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline ListGrantsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextMarker</code> from the response you just received.</p>
     */
    inline ListGrantsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline ListGrantsRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline ListGrantsRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the customer master key. This value can be a globally
     * unique identifier or the fully specified ARN to a key.</p> <ul> <li> <p>Key ARN
     * Example -
     * arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</p>
     * </li> <li> <p>Globally Unique Key ID Example -
     * 12345678-1234-1234-1234-123456789012</p> </li> </ul>
     */
    inline ListGrantsRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
