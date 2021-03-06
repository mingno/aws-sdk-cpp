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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/IntegrationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Sets up a method's integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegrationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API PutIntegrationRequest : public APIGatewayRequest
  {
  public:
    PutIntegrationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntegration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline const IntegrationType& GetType() const{ return m_type; }

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline void SetType(const IntegrationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline void SetType(IntegrationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline PutIntegrationRequest& WithType(const IntegrationType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline PutIntegrationRequest& WithType(IntegrationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline const Aws::String& GetIntegrationHttpMethod() const{ return m_integrationHttpMethod; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(const Aws::String& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = value; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(Aws::String&& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = std::move(value); }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(const char* value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod.assign(value); }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const Aws::String& value) { SetIntegrationHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(Aws::String&& value) { SetIntegrationHttpMethod(std::move(value)); return *this;}

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const char* value) { SetIntegrationHttpMethod(value); return *this;}


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
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

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
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

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
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

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
    inline PutIntegrationRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}

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
    inline PutIntegrationRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

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
    inline PutIntegrationRequest& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(const Aws::String& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(Aws::String&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(const char* value) { m_credentialsHasBeenSet = true; m_credentials.assign(value); }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(Aws::String&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(const char* value) { SetCredentials(value); return *this;}


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
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

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
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

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
    inline PutIntegrationRequest& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

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
    inline PutIntegrationRequest& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}

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
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline PutIntegrationRequest& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


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
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = std::move(value); }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }


    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline const Aws::String& GetPassthroughBehavior() const{ return m_passthroughBehavior; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline void SetPassthroughBehavior(const Aws::String& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = value; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline void SetPassthroughBehavior(Aws::String&& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = std::move(value); }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline void SetPassthroughBehavior(const char* value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior.assign(value); }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline PutIntegrationRequest& WithPassthroughBehavior(const Aws::String& value) { SetPassthroughBehavior(value); return *this;}

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline PutIntegrationRequest& WithPassthroughBehavior(Aws::String&& value) { SetPassthroughBehavior(std::move(value)); return *this;}

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the <code>requestTemplates</code> property on the Integration
     * resource. There are three valid values: <code>WHEN_NO_MATCH</code>,
     * <code>WHEN_NO_TEMPLATES</code>, and <code>NEVER</code>. </p> <ul>
     * <li><p><code>WHEN_NO_MATCH</code> passes the request body for unmapped content
     * types through to the integration back end without transformation.</p></li>
     * <li><p><code>NEVER</code> rejects unmapped content types with an HTTP 415
     * 'Unsupported Media Type' response.</p></li>
     * <li><p><code>WHEN_NO_TEMPLATES</code> allows pass-through when the integration
     * has NO content types mapped to templates. However if there is at least one
     * content type defined, unmapped content types will be rejected with the same 415
     * response.</p></li> </ul>
     */
    inline PutIntegrationRequest& WithPassthroughBehavior(const char* value) { SetPassthroughBehavior(value); return *this;}


    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline const Aws::String& GetCacheNamespace() const{ return m_cacheNamespace; }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline void SetCacheNamespace(const Aws::String& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = value; }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline void SetCacheNamespace(Aws::String&& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = std::move(value); }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline void SetCacheNamespace(const char* value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace.assign(value); }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(std::move(value)); return *this;}

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}


    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const{ return m_cacheKeyParameters; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(const Aws::Vector<Aws::String>& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = value; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(Aws::Vector<Aws::String>&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = std::move(value); }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(std::move(value)); return *this;}

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(const char* value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }


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
    inline void SetContentHandling(const ContentHandlingStrategy& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }

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
    inline void SetContentHandling(ContentHandlingStrategy&& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = std::move(value); }

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
    inline PutIntegrationRequest& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}

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
    inline PutIntegrationRequest& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}


    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillisHasBeenSet = true; m_timeoutInMillis = value; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000 milliseconds or 29 seconds.</p>
     */
    inline PutIntegrationRequest& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;

    IntegrationType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_integrationHttpMethod;
    bool m_integrationHttpMethodHasBeenSet;

    Aws::String m_uri;
    bool m_uriHasBeenSet;

    Aws::String m_credentials;
    bool m_credentialsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;
    bool m_requestParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;
    bool m_requestTemplatesHasBeenSet;

    Aws::String m_passthroughBehavior;
    bool m_passthroughBehaviorHasBeenSet;

    Aws::String m_cacheNamespace;
    bool m_cacheNamespaceHasBeenSet;

    Aws::Vector<Aws::String> m_cacheKeyParameters;
    bool m_cacheKeyParametersHasBeenSet;

    ContentHandlingStrategy m_contentHandling;
    bool m_contentHandlingHasBeenSet;

    int m_timeoutInMillis;
    bool m_timeoutInMillisHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
