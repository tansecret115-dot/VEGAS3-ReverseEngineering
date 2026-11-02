/* Module: extmondrv.dll
   Function: FUN_00420790
   Address: 00420790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00420be9) */
/* WARNING: Removing unreachable block (ram,0x004208bc) */
/* WARNING: Removing unreachable block (ram,0x00420bfb) */
/* WARNING: Removing unreachable block (ram,0x004208d4) */

longlong FUN_00420790(LPCSTR param_1,int *param_2,longlong param_3,uint param_4,undefined4 param_5,
                     uint param_6,undefined4 param_7,uint param_8,int *param_9)

{
  char cVar1;
  LPCSTR lpsz;
  int iVar2;
  uint *puVar3;
  float10 fVar4;
  longlong lVar5;
  uint local_18 [6];
  
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar5 = 0;
  iVar2 = _ismbcspace((int)*param_1);
  lpsz = param_1;
  while (iVar2 != 0) {
    lpsz = CharNextA(lpsz);
    iVar2 = _ismbcspace((int)*lpsz);
  }
  cVar1 = *lpsz;
  if (cVar1 == '-') {
    param_1 = lpsz + 1;
  }
  if (param_9 != (int *)0x0) {
    iVar2 = lstrlenA(param_1);
    *param_9 = (int)(param_1 + iVar2);
  }
  switch(*param_2) {
  case 0:
    FUN_0041f110(param_1,param_9);
    iVar2 = param_2[1];
    ftol();
    ftol();
    if (iVar2 == 0) {
      lVar5 = 0;
      break;
    }
    goto LAB_00420b61;
  case 1:
    lVar5 = FUN_004202e0(param_1,param_2,param_8 & 1,param_9);
    lVar5 = __allmul((uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),10000,0);
    break;
  case 2:
    fVar4 = FUN_0041f540(param_1,param_9);
    if ((float10)-0x6b5fca6af2 <= fVar4) {
      lVar5 = ftol();
    }
    else {
      lVar5 = ftol();
    }
    break;
  case 3:
    local_18[0] = 0;
    lVar5 = FUN_004204b0(param_1,param_2,param_8 & 1,param_9);
    break;
  case 4:
    FUN_0041f540(param_1,param_9);
    ftol();
    ftol();
LAB_00420b61:
    lVar5 = ftol();
    break;
  case 5:
  case 0xd:
    lVar5 = FUN_004205d0(param_1,param_2,param_8);
    break;
  case 6:
    local_18[0] = 5;
    FUN_00449740(param_1,local_18);
    lVar5 = FUN_00449690(local_18);
    break;
  case 7:
    local_18[0] = 1;
    goto LAB_00420a64;
  case 8:
    local_18[0] = 2;
LAB_00420a64:
    FUN_00449740(param_1,local_18);
    lVar5 = FUN_00449690(local_18);
    break;
  case 9:
    local_18[0] = 3;
    FUN_00449740(param_1,local_18);
    lVar5 = FUN_00449690(local_18);
    break;
  case 10:
    local_18[0] = 4;
    FUN_00449740(param_1,local_18);
    lVar5 = FUN_00449690(local_18);
    break;
  case 0xb:
    lVar5 = FUN_0041f110(param_1,param_9);
    break;
  case 0xc:
    lVar5 = FUN_0041f110(param_1,param_9);
    lVar5 = __allmul((uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),10,0);
    break;
  case 0xf:
    iVar2 = 1;
    goto LAB_00420b7a;
  case 0x10:
    iVar2 = 0;
LAB_00420b7a:
    lVar5 = FUN_00420230(param_1,param_2,iVar2);
    break;
  case 0x11:
    local_18[0] = 0;
    FUN_00449740(param_1,local_18);
    lVar5 = FUN_0041f860(local_18);
  }
  if (cVar1 == '-') {
    lVar5 = CONCAT44(-((int)((ulonglong)lVar5 >> 0x20) + (uint)((int)lVar5 != 0)),-(int)lVar5);
  }
  if ((param_8 >> 1 & 1) == 0) {
    lVar5 = lVar5 + *(longlong *)(param_2 + 6);
  }
  if ((param_8 >> 2 & 1) != 0) {
    if (((lVar5 == 0) && (*(char *)*param_9 != '\0')) &&
       (iVar2 = _ismbcspace((int)*(char *)*param_9), iVar2 == 0)) {
      lVar5 = param_3;
    }
    if (lVar5 < CONCAT44(param_5,param_4)) {
      return CONCAT44(param_5,param_4);
    }
    if (CONCAT44(param_7,param_6) < lVar5) {
      return CONCAT44(param_7,param_6);
    }
  }
  return lVar5;
}


