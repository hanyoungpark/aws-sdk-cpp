﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicyHeadersConfig.h>
#include <aws/cloudfront/model/CachePolicyCookiesConfig.h>
#include <aws/cloudfront/model/CachePolicyQueryStringsConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>This object determines the values that CloudFront includes in the cache key.
   * These values can include HTTP headers, cookies, and URL query strings.
   * CloudFront uses the cache key to find an object in its cache that it can return
   * to the viewer.</p> <p>The headers, cookies, and query strings that are included
   * in the cache key are automatically included in requests that CloudFront sends to
   * the origin. CloudFront sends a request when it can’t find an object in its cache
   * that matches the request’s cache key. If you want to send values to the origin
   * but <i>not</i> include them in the cache key, use
   * <code>CreateOriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ParametersInCacheKeyAndForwardedToOrigin">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ParametersInCacheKeyAndForwardedToOrigin
  {
  public:
    ParametersInCacheKeyAndForwardedToOrigin();
    ParametersInCacheKeyAndForwardedToOrigin(const Aws::Utils::Xml::XmlNode& xmlNode);
    ParametersInCacheKeyAndForwardedToOrigin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A flag that determines whether the <code>Accept-Encoding</code> HTTP header
     * is included in the cache key and included in requests that CloudFront sends to
     * the origin.</p> <p>If this field is <code>true</code> <i>and</i> the viewer
     * request includes the <code>Accept-Encoding</code> header, then CloudFront
     * normalizes the value of the viewer’s <code>Accept-Encoding</code> header to one
     * of the following:</p> <ul> <li> <p> <code>Accept-Encoding: gzip</code> (if
     * <code>gzip</code> is in the viewer’s <code>Accept-Encoding</code> header)</p>
     * </li> <li> <p> <code>Accept-Encoding: identity</code> (if <code>gzip</code> is
     * <i>not</i> in the viewer’s <code>Accept-Encoding</code> header)</p> </li> </ul>
     * <p>CloudFront includes the normalized header in the cache key and includes it in
     * requests that CloudFront sends to the origin.</p> <p>If this field is
     * <code>false</code>, then CloudFront treats the <code>Accept-Encoding</code>
     * header the same as any other HTTP header in the viewer request. By default, it’s
     * not included in the cache key and it’s not included in origin requests. You can
     * manually add <code>Accept-Encoding</code> to the headers whitelist like any
     * other HTTP header.</p> <p>When this field is <code>true</code>, you should not
     * whitelist the <code>Accept-Encoding</code> header in the cache policy or in an
     * origin request policy attached to the same cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-policy-compressed-objects">Cache
     * compressed objects</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool GetEnableAcceptEncodingGzip() const{ return m_enableAcceptEncodingGzip; }

    /**
     * <p>A flag that determines whether the <code>Accept-Encoding</code> HTTP header
     * is included in the cache key and included in requests that CloudFront sends to
     * the origin.</p> <p>If this field is <code>true</code> <i>and</i> the viewer
     * request includes the <code>Accept-Encoding</code> header, then CloudFront
     * normalizes the value of the viewer’s <code>Accept-Encoding</code> header to one
     * of the following:</p> <ul> <li> <p> <code>Accept-Encoding: gzip</code> (if
     * <code>gzip</code> is in the viewer’s <code>Accept-Encoding</code> header)</p>
     * </li> <li> <p> <code>Accept-Encoding: identity</code> (if <code>gzip</code> is
     * <i>not</i> in the viewer’s <code>Accept-Encoding</code> header)</p> </li> </ul>
     * <p>CloudFront includes the normalized header in the cache key and includes it in
     * requests that CloudFront sends to the origin.</p> <p>If this field is
     * <code>false</code>, then CloudFront treats the <code>Accept-Encoding</code>
     * header the same as any other HTTP header in the viewer request. By default, it’s
     * not included in the cache key and it’s not included in origin requests. You can
     * manually add <code>Accept-Encoding</code> to the headers whitelist like any
     * other HTTP header.</p> <p>When this field is <code>true</code>, you should not
     * whitelist the <code>Accept-Encoding</code> header in the cache policy or in an
     * origin request policy attached to the same cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-policy-compressed-objects">Cache
     * compressed objects</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool EnableAcceptEncodingGzipHasBeenSet() const { return m_enableAcceptEncodingGzipHasBeenSet; }

    /**
     * <p>A flag that determines whether the <code>Accept-Encoding</code> HTTP header
     * is included in the cache key and included in requests that CloudFront sends to
     * the origin.</p> <p>If this field is <code>true</code> <i>and</i> the viewer
     * request includes the <code>Accept-Encoding</code> header, then CloudFront
     * normalizes the value of the viewer’s <code>Accept-Encoding</code> header to one
     * of the following:</p> <ul> <li> <p> <code>Accept-Encoding: gzip</code> (if
     * <code>gzip</code> is in the viewer’s <code>Accept-Encoding</code> header)</p>
     * </li> <li> <p> <code>Accept-Encoding: identity</code> (if <code>gzip</code> is
     * <i>not</i> in the viewer’s <code>Accept-Encoding</code> header)</p> </li> </ul>
     * <p>CloudFront includes the normalized header in the cache key and includes it in
     * requests that CloudFront sends to the origin.</p> <p>If this field is
     * <code>false</code>, then CloudFront treats the <code>Accept-Encoding</code>
     * header the same as any other HTTP header in the viewer request. By default, it’s
     * not included in the cache key and it’s not included in origin requests. You can
     * manually add <code>Accept-Encoding</code> to the headers whitelist like any
     * other HTTP header.</p> <p>When this field is <code>true</code>, you should not
     * whitelist the <code>Accept-Encoding</code> header in the cache policy or in an
     * origin request policy attached to the same cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-policy-compressed-objects">Cache
     * compressed objects</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetEnableAcceptEncodingGzip(bool value) { m_enableAcceptEncodingGzipHasBeenSet = true; m_enableAcceptEncodingGzip = value; }

    /**
     * <p>A flag that determines whether the <code>Accept-Encoding</code> HTTP header
     * is included in the cache key and included in requests that CloudFront sends to
     * the origin.</p> <p>If this field is <code>true</code> <i>and</i> the viewer
     * request includes the <code>Accept-Encoding</code> header, then CloudFront
     * normalizes the value of the viewer’s <code>Accept-Encoding</code> header to one
     * of the following:</p> <ul> <li> <p> <code>Accept-Encoding: gzip</code> (if
     * <code>gzip</code> is in the viewer’s <code>Accept-Encoding</code> header)</p>
     * </li> <li> <p> <code>Accept-Encoding: identity</code> (if <code>gzip</code> is
     * <i>not</i> in the viewer’s <code>Accept-Encoding</code> header)</p> </li> </ul>
     * <p>CloudFront includes the normalized header in the cache key and includes it in
     * requests that CloudFront sends to the origin.</p> <p>If this field is
     * <code>false</code>, then CloudFront treats the <code>Accept-Encoding</code>
     * header the same as any other HTTP header in the viewer request. By default, it’s
     * not included in the cache key and it’s not included in origin requests. You can
     * manually add <code>Accept-Encoding</code> to the headers whitelist like any
     * other HTTP header.</p> <p>When this field is <code>true</code>, you should not
     * whitelist the <code>Accept-Encoding</code> header in the cache policy or in an
     * origin request policy attached to the same cache behavior.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-policy-compressed-objects">Cache
     * compressed objects</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline ParametersInCacheKeyAndForwardedToOrigin& WithEnableAcceptEncodingGzip(bool value) { SetEnableAcceptEncodingGzip(value); return *this;}


    /**
     * <p>An object that determines whether any HTTP headers (and if so, which headers)
     * are included in the cache key and automatically included in requests that
     * CloudFront sends to the origin.</p>
     */
    inline const CachePolicyHeadersConfig& GetHeadersConfig() const{ return m_headersConfig; }

    /**
     * <p>An object that determines whether any HTTP headers (and if so, which headers)
     * are included in the cache key and automatically included in requests that
     * CloudFront sends to the origin.</p>
     */
    inline bool HeadersConfigHasBeenSet() const { return m_headersConfigHasBeenSet; }

    /**
     * <p>An object that determines whether any HTTP headers (and if so, which headers)
     * are included in the cache key and automatically included in requests that
     * CloudFront sends to the origin.</p>
     */
    inline void SetHeadersConfig(const CachePolicyHeadersConfig& value) { m_headersConfigHasBeenSet = true; m_headersConfig = value; }

    /**
     * <p>An object that determines whether any HTTP headers (and if so, which headers)
     * are included in the cache key and automatically included in requests that
     * CloudFront sends to the origin.</p>
     */
    inline void SetHeadersConfig(CachePolicyHeadersConfig&& value) { m_headersConfigHasBeenSet = true; m_headersConfig = std::move(value); }

    /**
     * <p>An object that determines whether any HTTP headers (and if so, which headers)
     * are included in the cache key and automatically included in requests that
     * CloudFront sends to the origin.</p>
     */
    inline ParametersInCacheKeyAndForwardedToOrigin& WithHeadersConfig(const CachePolicyHeadersConfig& value) { SetHeadersConfig(value); return *this;}

    /**
     * <p>An object that determines whether any HTTP headers (and if so, which headers)
     * are included in the cache key and automatically included in requests that
     * CloudFront sends to the origin.</p>
     */
    inline ParametersInCacheKeyAndForwardedToOrigin& WithHeadersConfig(CachePolicyHeadersConfig&& value) { SetHeadersConfig(std::move(value)); return *this;}


    /**
     * <p>An object that determines whether any cookies in viewer requests (and if so,
     * which cookies) are included in the cache key and automatically included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline const CachePolicyCookiesConfig& GetCookiesConfig() const{ return m_cookiesConfig; }

    /**
     * <p>An object that determines whether any cookies in viewer requests (and if so,
     * which cookies) are included in the cache key and automatically included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline bool CookiesConfigHasBeenSet() const { return m_cookiesConfigHasBeenSet; }

    /**
     * <p>An object that determines whether any cookies in viewer requests (and if so,
     * which cookies) are included in the cache key and automatically included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline void SetCookiesConfig(const CachePolicyCookiesConfig& value) { m_cookiesConfigHasBeenSet = true; m_cookiesConfig = value; }

    /**
     * <p>An object that determines whether any cookies in viewer requests (and if so,
     * which cookies) are included in the cache key and automatically included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline void SetCookiesConfig(CachePolicyCookiesConfig&& value) { m_cookiesConfigHasBeenSet = true; m_cookiesConfig = std::move(value); }

    /**
     * <p>An object that determines whether any cookies in viewer requests (and if so,
     * which cookies) are included in the cache key and automatically included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline ParametersInCacheKeyAndForwardedToOrigin& WithCookiesConfig(const CachePolicyCookiesConfig& value) { SetCookiesConfig(value); return *this;}

    /**
     * <p>An object that determines whether any cookies in viewer requests (and if so,
     * which cookies) are included in the cache key and automatically included in
     * requests that CloudFront sends to the origin.</p>
     */
    inline ParametersInCacheKeyAndForwardedToOrigin& WithCookiesConfig(CachePolicyCookiesConfig&& value) { SetCookiesConfig(std::move(value)); return *this;}


    /**
     * <p>An object that determines whether any URL query strings in viewer requests
     * (and if so, which query strings) are included in the cache key and automatically
     * included in requests that CloudFront sends to the origin.</p>
     */
    inline const CachePolicyQueryStringsConfig& GetQueryStringsConfig() const{ return m_queryStringsConfig; }

    /**
     * <p>An object that determines whether any URL query strings in viewer requests
     * (and if so, which query strings) are included in the cache key and automatically
     * included in requests that CloudFront sends to the origin.</p>
     */
    inline bool QueryStringsConfigHasBeenSet() const { return m_queryStringsConfigHasBeenSet; }

    /**
     * <p>An object that determines whether any URL query strings in viewer requests
     * (and if so, which query strings) are included in the cache key and automatically
     * included in requests that CloudFront sends to the origin.</p>
     */
    inline void SetQueryStringsConfig(const CachePolicyQueryStringsConfig& value) { m_queryStringsConfigHasBeenSet = true; m_queryStringsConfig = value; }

    /**
     * <p>An object that determines whether any URL query strings in viewer requests
     * (and if so, which query strings) are included in the cache key and automatically
     * included in requests that CloudFront sends to the origin.</p>
     */
    inline void SetQueryStringsConfig(CachePolicyQueryStringsConfig&& value) { m_queryStringsConfigHasBeenSet = true; m_queryStringsConfig = std::move(value); }

    /**
     * <p>An object that determines whether any URL query strings in viewer requests
     * (and if so, which query strings) are included in the cache key and automatically
     * included in requests that CloudFront sends to the origin.</p>
     */
    inline ParametersInCacheKeyAndForwardedToOrigin& WithQueryStringsConfig(const CachePolicyQueryStringsConfig& value) { SetQueryStringsConfig(value); return *this;}

    /**
     * <p>An object that determines whether any URL query strings in viewer requests
     * (and if so, which query strings) are included in the cache key and automatically
     * included in requests that CloudFront sends to the origin.</p>
     */
    inline ParametersInCacheKeyAndForwardedToOrigin& WithQueryStringsConfig(CachePolicyQueryStringsConfig&& value) { SetQueryStringsConfig(std::move(value)); return *this;}

  private:

    bool m_enableAcceptEncodingGzip;
    bool m_enableAcceptEncodingGzipHasBeenSet;

    CachePolicyHeadersConfig m_headersConfig;
    bool m_headersConfigHasBeenSet;

    CachePolicyCookiesConfig m_cookiesConfig;
    bool m_cookiesConfigHasBeenSet;

    CachePolicyQueryStringsConfig m_queryStringsConfig;
    bool m_queryStringsConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
