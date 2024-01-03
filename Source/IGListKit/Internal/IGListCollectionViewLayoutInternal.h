/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

static CGRect IGListRectIntegralScaled(CGRect rect) {
    CGFloat scale = [[UITraitCollection currentTraitCollection] displayScale];
    return CGRectMake(floorf(rect.origin.x * scale) / scale,
                      floorf(rect.origin.y * scale) / scale,
                      ceilf(rect.size.width * scale) / scale,
                      ceilf(rect.size.height * scale) / scale);
}
