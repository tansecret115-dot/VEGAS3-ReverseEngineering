/* Module: aviplug.dll
   Function: FUN_5f94a710
   Address: 5f94a710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94a710(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_4 = 0;
  param_4[2] = 0;
  param_4[1] = 0;
  param_4[3] = 0;
  if ((**(byte **)(param_1 + 0x2a0) & 0x80) == 0) {
    uVar5 = __alldiv(param_2,param_3,*(uint *)(param_1 + 0x2e0),
                     (int)*(uint *)(param_1 + 0x2e0) >> 0x1f);
    iVar3 = (int)((ulonglong)uVar5 >> 0x20);
    lVar6 = __allmul(*(uint *)(param_1 + 0x2dc),(int)*(uint *)(param_1 + 0x2dc) >> 0x1f,(uint)uVar5,
                     iVar3);
    *(longlong *)(param_4 + 2) = lVar6;
    lVar6 = __allmul(*(uint *)(param_1 + 0x2e0),(int)*(uint *)(param_1 + 0x2e0) >> 0x1f,(uint)uVar5,
                     iVar3);
    *(longlong *)param_4 = lVar6;
    if (*(int *)(param_1 + 0x2f4) != 0) {
      uVar4 = *(uint *)(param_1 + 0x2d8);
      uVar1 = *(uint *)(*(int *)(param_1 + 0x2f4) + uVar4 * 4);
      uVar2 = uVar1 + *param_4;
      uVar1 = param_4[1] + (uint)CARRY4(uVar1,*param_4);
      if (((int)uVar1 <= (int)param_3) && (((int)uVar1 < (int)param_3 || (uVar2 <= param_2)))) {
        while( true ) {
          do {
            *param_4 = uVar2;
            uVar2 = param_4[2];
            param_4[1] = uVar1;
            param_4[2] = uVar2 + 1;
            param_4[3] = param_4[3] + (uint)(0xfffffffe < uVar2);
            uVar4 = (uVar4 + 1) % *(uint *)(param_1 + 0x2dc);
            uVar1 = *(uint *)(*(int *)(param_1 + 0x2f4) + uVar4 * 4);
            uVar2 = uVar1 + *param_4;
            uVar1 = param_4[1] + (uint)CARRY4(uVar1,*param_4);
          } while ((int)uVar1 < (int)param_3);
          if ((int)param_3 < (int)uVar1) break;
          if (param_2 < uVar2) {
            return 0;
          }
        }
      }
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x220);
    if ((uVar4 + *(uint *)(param_1 + 0x218) == param_2) &&
       (((int)uVar4 >> 0x1f) + *(int *)(param_1 + 0x21c) +
        (uint)CARRY4(uVar4,*(uint *)(param_1 + 0x218)) == param_3)) {
      *param_4 = param_2;
      param_4[1] = param_3;
      uVar4 = *(uint *)(param_1 + 0x2f0);
      uVar1 = *(uint *)(param_1 + 0x2e8);
      iVar3 = *(int *)(param_1 + 0x2ec);
      param_4[2] = uVar4 + uVar1;
      param_4[3] = ((int)uVar4 >> 0x1f) + iVar3 + (uint)CARRY4(uVar4,uVar1);
      return 0;
    }
    if (((*(byte **)(param_1 + 0x2a0))[2] & 0x20) == 0) {
      lVar6 = __allmul(param_2,param_3,30000,0);
      *(longlong *)(param_4 + 2) = lVar6;
      uVar5 = __alldiv(param_4[2],param_4[3],*(int *)(*(int *)(param_1 + 0x1c8) + 4) * 0x3e9,0);
      *(undefined8 *)(param_4 + 2) = uVar5;
      uVar5 = __alldiv(param_4[2],param_4[3],*(uint *)(param_1 + 0x2d4),
                       (int)*(uint *)(param_1 + 0x2d4) >> 0x1f);
      *(undefined8 *)(param_4 + 2) = uVar5;
      lVar6 = __allmul(*(uint *)(param_1 + 0x2d4),(int)*(uint *)(param_1 + 0x2d4) >> 0x1f,param_4[2]
                       ,param_4[3]);
      *(longlong *)(param_4 + 2) = lVar6;
      *param_4 = param_4[2];
      param_4[1] = param_4[3];
      lVar6 = __allmul(*(int *)(*(int *)(param_1 + 0x1c8) + 4) * 0x3e9,0,*param_4,param_4[1]);
      uVar1 = (uint)((ulonglong)lVar6 >> 0x20);
      *(longlong *)param_4 = lVar6;
      uVar4 = *param_4;
      uVar2 = 30000;
    }
    else {
      lVar6 = __allmul(param_2,param_3,0x19,0);
      *(longlong *)(param_4 + 2) = lVar6;
      uVar5 = __alldiv(param_4[2],param_4[3],*(uint *)(*(int *)(param_1 + 0x1c8) + 4),0);
      *(undefined8 *)(param_4 + 2) = uVar5;
      uVar5 = __alldiv(param_4[2],param_4[3],*(uint *)(param_1 + 0x2d4),
                       (int)*(uint *)(param_1 + 0x2d4) >> 0x1f);
      *(undefined8 *)(param_4 + 2) = uVar5;
      lVar6 = __allmul(*(uint *)(param_1 + 0x2d4),(int)*(uint *)(param_1 + 0x2d4) >> 0x1f,param_4[2]
                       ,param_4[3]);
      *(longlong *)(param_4 + 2) = lVar6;
      *param_4 = param_4[2];
      param_4[1] = param_4[3];
      lVar6 = __allmul(*(uint *)(*(int *)(param_1 + 0x1c8) + 4),0,*param_4,param_4[3]);
      uVar1 = (uint)((ulonglong)lVar6 >> 0x20);
      *(longlong *)param_4 = lVar6;
      uVar4 = *param_4;
      uVar2 = 0x19;
    }
    uVar5 = __alldiv(uVar4,uVar1,uVar2,0);
    *(undefined8 *)param_4 = uVar5;
  }
  return 0;
}


