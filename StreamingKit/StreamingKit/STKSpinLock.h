//
//  STKSpinLock.h
//  StreamingKit
//
//  Created by Diego Stamigni on 20/03/2019.
//  Copyright © 2019 Thong Nguyen. All rights reserved.
//

#pragma once

#import <os/lock.h>

static void setLock(os_unfair_lock *lock)
{
    os_unfair_lock_lock(lock);
}

static void lockUnlock(os_unfair_lock *lock)
{
    os_unfair_lock_unlock(lock);
}
