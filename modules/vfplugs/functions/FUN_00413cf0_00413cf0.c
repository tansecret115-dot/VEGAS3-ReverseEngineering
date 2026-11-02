/* Module: vfplugs.dll
   Function: FUN_00413cf0
   Address: 00413cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00413dad) */
/* WARNING: Removing unreachable block (ram,0x00413df6) */

uint FUN_00413cf0(HDC param_1,uint param_2)

{
  ushort uVar1;
  HDC pHVar2;
  uint uVar3;
  undefined4 *_Memory;
  int iVar4;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var;
  short sVar7;
  ushort uVar8;
  uint local_4;
  
  pHVar2 = param_1;
  FUN_00413a80(param_1,(undefined4 *)0x0,0,(uint *)&param_1);
  _Memory = malloc((size_t)param_1);
  iVar4 = FUN_00413a80(pHVar2,_Memory,(uint)param_1,(uint *)&param_1);
  uVar3 = param_2;
  if (iVar4 == 0) {
    free(_Memory);
    return extraout_EAX & 0xffff0000;
  }
  uVar8 = (ushort)param_2;
  iVar4 = FUN_00413c00((int)_Memory,uVar8,(ushort *)&local_4);
  if (iVar4 != 0) {
    iVar4 = FUN_00413760((int)_Memory);
    uVar5 = FUN_00413740((int)_Memory);
    param_2 = uVar5;
    iVar6 = FUN_00413720((int)_Memory);
    local_4 = local_4 & 0xffff;
    uVar1 = *(ushort *)(iVar4 + local_4 * 2);
    if (uVar1 == 0) {
      sVar7 = uVar8 + *(short *)(uVar5 + local_4 * 2);
    }
    else {
      sVar7 = *(short *)(iVar4 + ((uVar3 & 0xffff) +
                                 local_4 + ((uint)(uVar1 >> 1) -
                                           (uint)*(ushort *)(iVar6 + local_4 * 2))) * 2);
      if (sVar7 == 0) {
        sVar7 = 0;
      }
      else {
        sVar7 = sVar7 + *(short *)(param_2 + local_4 * 2);
      }
    }
    free(_Memory);
    return CONCAT22(extraout_var,sVar7);
  }
  free(_Memory);
  return extraout_EAX_00 & 0xffff0000;
}


