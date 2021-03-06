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

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/IntegrationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/IntegrationResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents an HTTP, HTTP_PROXY, AWS, AWS_PROXY, or Mock integration.</p> <div
   * class="remarks">In the API Gateway console, the built-in Lambda integration is
   * an AWS integration.</div> <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Integration">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateIntegrationResult
  {
  public:
    UpdateIntegrationResult();
    UpdateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code> for
     * integrating with an HTTP back end, <code>AWS</code> for any AWS service
     * endpoints, <code>MOCK</code> for testing without actually invoking the back end,
     * <code>HTTP_PROXY</code> for integrating with the HTTP proxy integration, or
     * <code>AWS_PROXY</code> for integrating with the Lambda proxy integration
     * type.</p>
     */
    inline const IntegrationType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code> for
     * integrating with an HTTP back end, <code>AWS</code> for any AWS service
     * endpoints, <code>MOCK</code> for testing without actually invoking the back end,
     * <code>HTTP_PROXY</code> for integrating with the HTTP proxy integration, or
     * <code>AWS_PROXY</code> for integrating with the Lambda proxy integration
     * type.</p>
     */
    inline void SetType(const IntegrationType& value) { m_type = value; }

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code> for
     * integrating with an HTTP back end, <code>AWS</code> for any AWS service
     * endpoints, <code>MOCK</code> for testing without actually invoking the back end,
     * <code>HTTP_PROXY</code> for integrating with the HTTP proxy integration, or
     * <code>AWS_PROXY</code> for integrating with the Lambda proxy integration
     * type.</p>
     */
    inline void SetType(IntegrationType&& value) { m_type = std::move(value); }

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code> for
     * integrating with an HTTP back end, <code>AWS</code> for any AWS service
     * endpoints, <code>MOCK</code> for testing without actually invoking the back end,
     * <code>HTTP_PROXY</code> for integrating with the HTTP proxy integration, or
     * <code>AWS_PROXY</code> for integrating with the Lambda proxy integration
     * type.</p>
     */
    inline UpdateIntegrationResult& WithType(const IntegrationType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the integration's type. The valid value is <code>HTTP</code> for
     * integrating with an HTTP back end, <code>AWS</code> for any AWS service
     * endpoints, <code>MOCK</code> for testing without actually invoking the back end,
     * <code>HTTP_PROXY</code> for integrating with the HTTP proxy integration, or
     * <code>AWS_PROXY</code> for integrating with the Lambda proxy integration
     * type.</p>
     */
    inline UpdateIntegrationResult& WithType(IntegrationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethod = value; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethod = std::move(value); }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethod.assign(value); }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline UpdateIntegrationResult& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline UpdateIntegrationResult& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline UpdateIntegrationResult& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier"
     * target="_blank">RFC-3986 specification</a>. For AWS integrations, the URI should
     * be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier"
     * target="_blank">RFC-3986 specification</a>. For AWS integrations, the URI should
     * be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uri = value; }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier"
     * target="_blank">RFC-3986 specification</a>. For AWS integrations, the URI should
     * be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uri = std::move(value); }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier"
     * target="_blank">RFC-3986 specification</a>. For AWS integrations, the URI should
     * be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline void SetUri(const char* value) { m_uri.assign(value); }

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier"
     * target="_blank">RFC-3986 specification</a>. For AWS integrations, the URI should
     * be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline UpdateIntegrationResult& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier"
     * target="_blank">RFC-3986 specification</a>. For AWS integrations, the URI should
     * be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline UpdateIntegrationResult& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's Uniform Resource Identifier (URI). For HTTP
     * integrations, the URI must be a fully formed, encoded HTTP(S) URL according to
     * the <a href="https://en.wikipedia.org/wiki/Uniform_Resource_Identifier"
     * target="_blank">RFC-3986 specification</a>. For AWS integrations, the URI should
     * be of the form
     * <code>arn:aws:apigateway:{region}:{subdomain.service|service}:{path|action}/{service_api}</code>.
     * <code>Region</code>, <code>subdomain</code> and <code>service</code> are used to
     * determine the right endpoint. For AWS services that use the <code>Action=</code>
     * query string parameter, <code>service_api</code> should be a valid action for
     * the desired service. For RESTful AWS service APIs, <code>path</code> is used to
     * indicate that the remaining substring in the URI should be treated as the path
     * to the resource, including the initial <code>/</code>.</p>
     */
    inline UpdateIntegrationResult& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline void SetCredentials(const Aws::String& value) { m_credentials = value; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline void SetCredentials(Aws::String&& value) { m_credentials = std::move(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline void SetCredentials(const char* value) { m_credentials.assign(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline UpdateIntegrationResult& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline UpdateIntegrationResult& WithCredentials(Aws::String&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for Amazon API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * <code>arn:aws:iam::\*:user/\*</code>. To use resource-based permissions on
     * supported AWS services, specify null.</p>
     */
    inline UpdateIntegrationResult& WithCredentials(const char* value) { SetCredentials(value); return *this;}


    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParameters = value; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParameters = std::move(value); }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the method
     * request to the back end. The key is an integration request parameter name and
     * the associated value is a method request parameter value or static value that
     * must be enclosed within single quotes and pre-encoded as required by the back
     * end. The method request parameter value must match the pattern of
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * <code>querystring</code>, <code>path</code>, or <code>header</code> and
     * <code>name</code> must be a valid and unique method request parameter name.</p>
     */
    inline UpdateIntegrationResult& AddRequestParameters(const char* key, const char* value) { m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplates = value; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplates = std::move(value); }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplates.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline UpdateIntegrationResult& AddRequestTemplates(const char* key, const char* value) { m_requestTemplates.emplace(key, value); return *this; }


    /**
     * <div> <p> Specifies how the method request body of an unmapped content type will
     * be passed through the integration request to the back end without
     * transformation. A content type is unmapped if no mapping template is defined in
     * the integration or the content type does not match any of the mapped content
     * types, as specified in <code>requestTemplates</code>. There are three valid
     * values: <code>WHEN_NO_MATCH</code>, <code>WHEN_NO_TEMPLATES</code>, and
     * <code>NEVER</code>. </p> <ul> <li> <code>WHEN_NO_MATCH</code> passes the method
     * request body through the integration request to the back end without
     * transformation when the method request content type does not match any content
     * type associated with the mapping templates defined in the integration request.
     * </li> <li> <code>WHEN_NO_TEMPLATES</code> passes the method request body through
     * the integration request to the back end without transformation when no mapping
     * template is defined in the integration request. If a template is defined when
     * this option is selected, the method request of an unmapped content-type will be
     * rejected with an HTTP <code>415 Unsupported Media Type</code> response. </li>
     * <li> <code>NEVER</code> rejects the method request with an HTTP <code>415
     * Unsupported Media Type</code> response when either the method request content
     * type does not match any content type associated with the mapping templates
     * defined in the integration request or no mapping template is defined in the
     * integration request. </li> </ul> </div>
     */
    inline const Aws::String& GetPassthroughBehavior() const{ return m_passthroughBehavior; }

    /**
     * <div> <p> Specifies how the method request body of an unmapped content type will
     * be passed through the integration request to the back end without
     * transformation. A content type is unmapped if no mapping template is defined in
     * the integration or the content type does not match any of the mapped content
     * types, as specified in <code>requestTemplates</code>. There are three valid
     * values: <code>WHEN_NO_MATCH</code>, <code>WHEN_NO_TEMPLATES</code>, and
     * <code>NEVER</code>. </p> <ul> <li> <code>WHEN_NO_MATCH</code> passes the method
     * request body through the integration request to the back end without
     * transformation when the method request content type does not match any content
     * type associated with the mapping templates defined in the integration request.
     * </li> <li> <code>WHEN_NO_TEMPLATES</code> passes the method request body through
     * the integration request to the back end without transformation when no mapping
     * template is defined in the integration request. If a template is defined when
     * this option is selected, the method request of an unmapped content-type will be
     * rejected with an HTTP <code>415 Unsupported Media Type</code> response. </li>
     * <li> <code>NEVER</code> rejects the method request with an HTTP <code>415
     * Unsupported Media Type</code> response when either the method request content
     * type does not match any content type associated with the mapping templates
     * defined in the integration request or no mapping template is defined in the
     * integration request. </li> </ul> </div>
     */
    inline void SetPassthroughBehavior(const Aws::String& value) { m_passthroughBehavior = value; }

    /**
     * <div> <p> Specifies how the method request body of an unmapped content type will
     * be passed through the integration request to the back end without
     * transformation. A content type is unmapped if no mapping template is defined in
     * the integration or the content type does not match any of the mapped content
     * types, as specified in <code>requestTemplates</code>. There are three valid
     * values: <code>WHEN_NO_MATCH</code>, <code>WHEN_NO_TEMPLATES</code>, and
     * <code>NEVER</code>. </p> <ul> <li> <code>WHEN_NO_MATCH</code> passes the method
     * request body through the integration request to the back end without
     * transformation when the method request content type does not match any content
     * type associated with the mapping templates defined in the integration request.
     * </li> <li> <code>WHEN_NO_TEMPLATES</code> passes the method request body through
     * the integration request to the back end without transformation when no mapping
     * template is defined in the integration request. If a template is defined when
     * this option is selected, the method request of an unmapped content-type will be
     * rejected with an HTTP <code>415 Unsupported Media Type</code> response. </li>
     * <li> <code>NEVER</code> rejects the method request with an HTTP <code>415
     * Unsupported Media Type</code> response when either the method request content
     * type does not match any content type associated with the mapping templates
     * defined in the integration request or no mapping template is defined in the
     * integration request. </li> </ul> </div>
     */
    inline void SetPassthroughBehavior(Aws::String&& value) { m_passthroughBehavior = std::move(value); }

    /**
     * <div> <p> Specifies how the method request body of an unmapped content type will
     * be passed through the integration request to the back end without
     * transformation. A content type is unmapped if no mapping template is defined in
     * the integration or the content type does not match any of the mapped content
     * types, as specified in <code>requestTemplates</code>. There are three valid
     * values: <code>WHEN_NO_MATCH</code>, <code>WHEN_NO_TEMPLATES</code>, and
     * <code>NEVER</code>. </p> <ul> <li> <code>WHEN_NO_MATCH</code> passes the method
     * request body through the integration request to the back end without
     * transformation when the method request content type does not match any content
     * type associated with the mapping templates defined in the integration request.
     * </li> <li> <code>WHEN_NO_TEMPLATES</code> passes the method request body through
     * the integration request to the back end without transformation when no mapping
     * template is defined in the integration request. If a template is defined when
     * this option is selected, the method request of an unmapped content-type will be
     * rejected with an HTTP <code>415 Unsupported Media Type</code> response. </li>
     * <li> <code>NEVER</code> rejects the method request with an HTTP <code>415
     * Unsupported Media Type</code> response when either the method request content
     * type does not match any content type associated with the mapping templates
     * defined in the integration request or no mapping template is defined in the
     * integration request. </li> </ul> </div>
     */
    inline void SetPassthroughBehavior(const char* value) { m_passthroughBehavior.assign(value); }

    /**
     * <div> <p> Specifies how the method request body of an unmapped content type will
     * be passed through the integration request to the back end without
     * transformation. A content type is unmapped if no mapping template is defined in
     * the integration or the content type does not match any of the mapped content
     * types, as specified in <code>requestTemplates</code>. There are three valid
     * values: <code>WHEN_NO_MATCH</code>, <code>WHEN_NO_TEMPLATES</code>, and
     * <code>NEVER</code>. </p> <ul> <li> <code>WHEN_NO_MATCH</code> passes the method
     * request body through the integration request to the back end without
     * transformation when the method request content type does not match any content
     * type associated with the mapping templates defined in the integration request.
     * </li> <li> <code>WHEN_NO_TEMPLATES</code> passes the method request body through
     * the integration request to the back end without transformation when no mapping
     * template is defined in the integration request. If a template is defined when
     * this option is selected, the method request of an unmapped content-type will be
     * rejected with an HTTP <code>415 Unsupported Media Type</code> response. </li>
     * <li> <code>NEVER</code> rejects the method request with an HTTP <code>415
     * Unsupported Media Type</code> response when either the method request content
     * type does not match any content type associated with the mapping templates
     * defined in the integration request or no mapping template is defined in the
     * integration request. </li> </ul> </div>
     */
    inline UpdateIntegrationResult& WithPassthroughBehavior(const Aws::String& value) { SetPassthroughBehavior(value); return *this;}

    /**
     * <div> <p> Specifies how the method request body of an unmapped content type will
     * be passed through the integration request to the back end without
     * transformation. A content type is unmapped if no mapping template is defined in
     * the integration or the content type does not match any of the mapped content
     * types, as specified in <code>requestTemplates</code>. There are three valid
     * values: <code>WHEN_NO_MATCH</code>, <code>WHEN_NO_TEMPLATES</code>, and
     * <code>NEVER</code>. </p> <ul> <li> <code>WHEN_NO_MATCH</code> passes the method
     * request body through the integration request to the back end without
     * transformation when the method request content type does not match any content
     * type associated with the mapping templates defined in the integration request.
     * </li> <li> <code>WHEN_NO_TEMPLATES</code> passes the method request body through
     * the integration request to the back end without transformation when no mapping
     * template is defined in the integration request. If a template is defined when
     * this option is selected, the method request of an unmapped content-type will be
     * rejected with an HTTP <code>415 Unsupported Media Type</code> response. </li>
     * <li> <code>NEVER</code> rejects the method request with an HTTP <code>415
     * Unsupported Media Type</code> response when either the method request content
     * type does not match any content type associated with the mapping templates
     * defined in the integration request or no mapping template is defined in the
     * integration request. </li> </ul> </div>
     */
    inline UpdateIntegrationResult& WithPassthroughBehavior(Aws::String&& value) { SetPassthroughBehavior(std::move(value)); return *this;}

    /**
     * <div> <p> Specifies how the method request body of an unmapped content type will
     * be passed through the integration request to the back end without
     * transformation. A content type is unmapped if no mapping template is defined in
     * the integration or the content type does not match any of the mapped content
     * types, as specified in <code>requestTemplates</code>. There are three valid
     * values: <code>WHEN_NO_MATCH</code>, <code>WHEN_NO_TEMPLATES</code>, and
     * <code>NEVER</code>. </p> <ul> <li> <code>WHEN_NO_MATCH</code> passes the method
     * request body through the integration request to the back end without
     * transformation when the method request content type does not match any content
     * type associated with the mapping templates defined in the integration request.
     * </li> <li> <code>WHEN_NO_TEMPLATES</code> passes the method request body through
     * the integration request to the back end without transformation when no mapping
     * template is defined in the integration request. If a template is defined when
     * this option is selected, the method request of an unmapped content-type will be
     * rejected with an HTTP <code>415 Unsupported Media Type</code> response. </li>
     * <li> <code>NEVER</code> rejects the method request with an HTTP <code>415
     * Unsupported Media Type</code> response when either the method request content
     * type does not match any content type associated with the mapping templates
     * defined in the integration request or no mapping template is defined in the
     * integration request. </li> </ul> </div>
     */
    inline UpdateIntegrationResult& WithPassthroughBehavior(const char* value) { SetPassthroughBehavior(value); return *this;}


    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehaviors</code> is configured to support payload
     * pass-through.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandling() const{ return m_contentHandling; }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehaviors</code> is configured to support payload
     * pass-through.</p>
     */
    inline void SetContentHandling(const ContentHandlingStrategy& value) { m_contentHandling = value; }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehaviors</code> is configured to support payload
     * pass-through.</p>
     */
    inline void SetContentHandling(ContentHandlingStrategy&& value) { m_contentHandling = std::move(value); }

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehaviors</code> is configured to support payload
     * pass-through.</p>
     */
    inline UpdateIntegrationResult& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}

    /**
     * <p>Specifies how to handle request payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a request payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a request
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the request payload will be passed through from the
     * method request to integration request without modification, provided that the
     * <code>passthroughBehaviors</code> is configured to support payload
     * pass-through.</p>
     */
    inline UpdateIntegrationResult& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}


    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillis = value; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline UpdateIntegrationResult& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}


    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline const Aws::String& GetCacheNamespace() const{ return m_cacheNamespace; }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline void SetCacheNamespace(const Aws::String& value) { m_cacheNamespace = value; }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline void SetCacheNamespace(Aws::String&& value) { m_cacheNamespace = std::move(value); }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline void SetCacheNamespace(const char* value) { m_cacheNamespace.assign(value); }

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline UpdateIntegrationResult& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline UpdateIntegrationResult& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's cache namespace.</p>
     */
    inline UpdateIntegrationResult& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}


    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const{ return m_cacheKeyParameters; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(const Aws::Vector<Aws::String>& value) { m_cacheKeyParameters = value; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(Aws::Vector<Aws::String>&& value) { m_cacheKeyParameters = std::move(value); }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline UpdateIntegrationResult& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline UpdateIntegrationResult& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline UpdateIntegrationResult& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline UpdateIntegrationResult& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the integration's cache key parameters.</p>
     */
    inline UpdateIntegrationResult& AddCacheKeyParameters(const char* value) { m_cacheKeyParameters.push_back(value); return *this; }


    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline const Aws::Map<Aws::String, IntegrationResponse>& GetIntegrationResponses() const{ return m_integrationResponses; }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline void SetIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { m_integrationResponses = value; }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline void SetIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { m_integrationResponses = std::move(value); }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& WithIntegrationResponses(const Aws::Map<Aws::String, IntegrationResponse>& value) { SetIntegrationResponses(value); return *this;}

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& WithIntegrationResponses(Aws::Map<Aws::String, IntegrationResponse>&& value) { SetIntegrationResponses(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& AddIntegrationResponses(const Aws::String& key, const IntegrationResponse& value) { m_integrationResponses.emplace(key, value); return *this; }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& AddIntegrationResponses(Aws::String&& key, const IntegrationResponse& value) { m_integrationResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& AddIntegrationResponses(const Aws::String& key, IntegrationResponse&& value) { m_integrationResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& AddIntegrationResponses(Aws::String&& key, IntegrationResponse&& value) { m_integrationResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& AddIntegrationResponses(const char* key, IntegrationResponse&& value) { m_integrationResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the integration's responses.</p> <div class="remarks"> <p/>
     * <h4>Example: Get integration responses of a method</h4> <h5>Request</h5> <p/>
     * <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200
     * HTTP/1.1 Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * X-Amz-Date: 20160607T191449Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160607/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash} </code></pre>
     * <h5>Response</h5> <p>The successful response returns <code>200 OK</code> status
     * and a payload as follows:</p> <pre><code>{ "_links": { "curies": { "href":
     * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true }, "self": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
     * "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * }, "integrationresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
     * } }, "responseParameters": { "method.response.header.Content-Type":
     * "'application/xml'" }, "responseTemplates": { "application/json":
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Creating
     * an API</a> </div>
     */
    inline UpdateIntegrationResult& AddIntegrationResponses(const char* key, const IntegrationResponse& value) { m_integrationResponses.emplace(key, value); return *this; }

  private:

    IntegrationType m_type;

    Aws::String m_httpMethod;

    Aws::String m_uri;

    Aws::String m_credentials;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;

    Aws::String m_passthroughBehavior;

    ContentHandlingStrategy m_contentHandling;

    int m_timeoutInMillis;

    Aws::String m_cacheNamespace;

    Aws::Vector<Aws::String> m_cacheKeyParameters;

    Aws::Map<Aws::String, IntegrationResponse> m_integrationResponses;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
