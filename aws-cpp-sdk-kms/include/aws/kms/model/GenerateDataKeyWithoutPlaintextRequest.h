﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kms/model/DataKeySpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API GenerateDataKeyWithoutPlaintextRequest : public KMSRequest
  {
  public:
    GenerateDataKeyWithoutPlaintextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateDataKeyWithoutPlaintext"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the symmetric KMS key that encrypts the data key.</p> <p>To
     * specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using
     * an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN or alias
     * ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const{ return m_encryptionContext; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = value; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext = std::move(value); }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContext(value); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(const Aws::String& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(Aws::String&& key, const Aws::String& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(const Aws::String& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(Aws::String&& key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(const char* key, Aws::String&& value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(Aws::String&& key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the encryption context that will be used when encrypting the data
     * key.</p> <p>An <i>encryption context</i> is a collection of non-secret key-value
     * pairs that represents additional authenticated data. When you use an encryption
     * context to encrypt data, you must specify the same (an exact case-sensitive
     * match) encryption context to decrypt the data. An encryption context is optional
     * when encrypting with a symmetric KMS key, but it is highly recommended.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddEncryptionContext(const char* key, const char* value) { m_encryptionContextHasBeenSet = true; m_encryptionContext.emplace(key, value); return *this; }


    /**
     * <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit
     * symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
     */
    inline const DataKeySpec& GetKeySpec() const{ return m_keySpec; }

    /**
     * <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit
     * symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
     */
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }

    /**
     * <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit
     * symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
     */
    inline void SetKeySpec(const DataKeySpec& value) { m_keySpecHasBeenSet = true; m_keySpec = value; }

    /**
     * <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit
     * symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
     */
    inline void SetKeySpec(DataKeySpec&& value) { m_keySpecHasBeenSet = true; m_keySpec = std::move(value); }

    /**
     * <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit
     * symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithKeySpec(const DataKeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit
     * symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithKeySpec(DataKeySpec&& value) { SetKeySpec(std::move(value)); return *this;}


    /**
     * <p>The length of the data key in bytes. For example, use the value 64 to
     * generate a 512-bit data key (64 bytes is 512 bits). For common key lengths
     * (128-bit and 256-bit symmetric keys), we recommend that you use the
     * <code>KeySpec</code> field instead of this one.</p>
     */
    inline int GetNumberOfBytes() const{ return m_numberOfBytes; }

    /**
     * <p>The length of the data key in bytes. For example, use the value 64 to
     * generate a 512-bit data key (64 bytes is 512 bits). For common key lengths
     * (128-bit and 256-bit symmetric keys), we recommend that you use the
     * <code>KeySpec</code> field instead of this one.</p>
     */
    inline bool NumberOfBytesHasBeenSet() const { return m_numberOfBytesHasBeenSet; }

    /**
     * <p>The length of the data key in bytes. For example, use the value 64 to
     * generate a 512-bit data key (64 bytes is 512 bits). For common key lengths
     * (128-bit and 256-bit symmetric keys), we recommend that you use the
     * <code>KeySpec</code> field instead of this one.</p>
     */
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }

    /**
     * <p>The length of the data key in bytes. For example, use the value 64 to
     * generate a 512-bit data key (64 bytes is 512 bits). For common key lengths
     * (128-bit and 256-bit symmetric keys), we recommend that you use the
     * <code>KeySpec</code> field instead of this one.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}


    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const{ return m_grantTokens; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(const Aws::Vector<Aws::String>& value) { m_grantTokensHasBeenSet = true; m_grantTokens = value; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetGrantTokens(Aws::Vector<Aws::String>&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::move(value); }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithGrantTokens(const Aws::Vector<Aws::String>& value) { SetGrantTokens(value); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& WithGrantTokens(Aws::Vector<Aws::String>&& value) { SetGrantTokens(std::move(value)); return *this;}

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddGrantTokens(const Aws::String& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddGrantTokens(Aws::String&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GenerateDataKeyWithoutPlaintextRequest& AddGrantTokens(const char* value) { m_grantTokensHasBeenSet = true; m_grantTokens.push_back(value); return *this; }

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_encryptionContext;
    bool m_encryptionContextHasBeenSet;

    DataKeySpec m_keySpec;
    bool m_keySpecHasBeenSet;

    int m_numberOfBytes;
    bool m_numberOfBytesHasBeenSet;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
