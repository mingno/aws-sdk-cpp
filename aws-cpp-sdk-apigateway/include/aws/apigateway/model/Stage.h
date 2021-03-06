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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/CacheClusterSize.h>
#include <aws/apigateway/model/CacheClusterStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/AccessLogSettings.h>
#include <aws/apigateway/model/CanarySettings.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigateway/model/MethodSetting.h>
#include <utility>

namespace Aws
{
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
   * <p>Represents a unique identifier for a version of a deployed <a>RestApi</a>
   * that is callable by users.</p> <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-deploy-api.html">Deploy
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Stage">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API Stage
  {
  public:
    Stage();
    Stage(const Aws::Utils::Json::JsonValue& jsonValue);
    Stage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline Stage& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline Stage& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> that the stage points to.</p>
     */
    inline Stage& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline Stage& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline Stage& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a client certificate for an API stage.</p>
     */
    inline Stage& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}


    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline Stage& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline Stage& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage is the first path segment in the Uniform Resource
     * Identifier (URI) of a call to Amazon API Gateway.</p>
     */
    inline Stage& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>The stage's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The stage's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The stage's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The stage's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The stage's description.</p>
     */
    inline Stage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The stage's description.</p>
     */
    inline Stage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The stage's description.</p>
     */
    inline Stage& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether a cache cluster is enabled for the stage.</p>
     */
    inline bool GetCacheClusterEnabled() const{ return m_cacheClusterEnabled; }

    /**
     * <p>Specifies whether a cache cluster is enabled for the stage.</p>
     */
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }

    /**
     * <p>Specifies whether a cache cluster is enabled for the stage.</p>
     */
    inline Stage& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}


    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline const CacheClusterSize& GetCacheClusterSize() const{ return m_cacheClusterSize; }

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterSize(const CacheClusterSize& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterSize(CacheClusterSize&& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = std::move(value); }

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline Stage& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}

    /**
     * <p>The size of the cache cluster for the stage, if enabled.</p>
     */
    inline Stage& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(std::move(value)); return *this;}


    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline const CacheClusterStatus& GetCacheClusterStatus() const{ return m_cacheClusterStatus; }

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterStatus(const CacheClusterStatus& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = value; }

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline void SetCacheClusterStatus(CacheClusterStatus&& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = std::move(value); }

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline Stage& WithCacheClusterStatus(const CacheClusterStatus& value) { SetCacheClusterStatus(value); return *this;}

    /**
     * <p>The status of the cache cluster for the stage, if enabled.</p>
     */
    inline Stage& WithCacheClusterStatus(CacheClusterStatus&& value) { SetCacheClusterStatus(std::move(value)); return *this;}


    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline const Aws::Map<Aws::String, MethodSetting>& GetMethodSettings() const{ return m_methodSettings; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline void SetMethodSettings(const Aws::Map<Aws::String, MethodSetting>& value) { m_methodSettingsHasBeenSet = true; m_methodSettings = value; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline void SetMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings = std::move(value); }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& WithMethodSettings(const Aws::Map<Aws::String, MethodSetting>& value) { SetMethodSettings(value); return *this;}

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& WithMethodSettings(Aws::Map<Aws::String, MethodSetting>&& value) { SetMethodSettings(std::move(value)); return *this;}

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& AddMethodSettings(const Aws::String& key, const MethodSetting& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& AddMethodSettings(Aws::String&& key, const MethodSetting& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& AddMethodSettings(const Aws::String& key, MethodSetting&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& AddMethodSettings(Aws::String&& key, MethodSetting&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& AddMethodSettings(const char* key, MethodSetting&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the method settings for a <a>Stage</a> resource. Keys
     * (designated as <code>/{method_setting_key</code> below) are method paths defined
     * as <code>{resource_path}/{http_method}</code> for an individual method override,
     * or <code>/\* /\*</code> for overriding all methods in the stage. </p>
     */
    inline Stage& AddMethodSettings(const char* key, const MethodSetting& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.emplace(key, value); return *this; }


    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for a <a>Stage</a> resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline Stage& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }


    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::move(value); }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline Stage& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline Stage& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline Stage& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}


    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline const AccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline void SetAccessLogSettings(const AccessLogSettings& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = value; }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline void SetAccessLogSettings(AccessLogSettings&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::move(value); }

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline Stage& WithAccessLogSettings(const AccessLogSettings& value) { SetAccessLogSettings(value); return *this;}

    /**
     * <p>Settings for logging access in this stage.</p>
     */
    inline Stage& WithAccessLogSettings(AccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}


    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline const CanarySettings& GetCanarySettings() const{ return m_canarySettings; }

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline void SetCanarySettings(const CanarySettings& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = value; }

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline void SetCanarySettings(CanarySettings&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::move(value); }

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline Stage& WithCanarySettings(const CanarySettings& value) { SetCanarySettings(value); return *this;}

    /**
     * <p>Settings for the canary deployment in this stage.</p>
     */
    inline Stage& WithCanarySettings(CanarySettings&& value) { SetCanarySettings(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline Stage& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the stage was created.</p>
     */
    inline Stage& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline Stage& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The timestamp when the stage last updated.</p>
     */
    inline Stage& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_cacheClusterEnabled;
    bool m_cacheClusterEnabledHasBeenSet;

    CacheClusterSize m_cacheClusterSize;
    bool m_cacheClusterSizeHasBeenSet;

    CacheClusterStatus m_cacheClusterStatus;
    bool m_cacheClusterStatusHasBeenSet;

    Aws::Map<Aws::String, MethodSetting> m_methodSettings;
    bool m_methodSettingsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet;

    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet;

    AccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet;

    CanarySettings m_canarySettings;
    bool m_canarySettingsHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
