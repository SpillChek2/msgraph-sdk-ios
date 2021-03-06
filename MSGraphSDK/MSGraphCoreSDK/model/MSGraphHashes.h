// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.





#import "MSObject.h"

@interface MSGraphHashes : MSObject

	@property (nonatomic, setter=setCrc32Hash:, getter=crc32Hash) NSString* crc32Hash;
		@property (nonatomic, setter=setSha1Hash:, getter=sha1Hash) NSString* sha1Hash;
	
@end
