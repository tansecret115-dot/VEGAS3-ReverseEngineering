/* Module: sftrans1.dll
   Function: FUN_00544c00
   Address: 00544c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00544d04) */
/* WARNING: Removing unreachable block (ram,0x00544d52) */

uint FUN_00544c00(HDC param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  HDC pHVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  void *pvVar5;
  int iVar6;
  uint extraout_EAX;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_8;
  uint local_4;
  
  pHVar2 = param_1;
  DVar4 = GetFontData(param_1,DAT_005771e4,8,&local_8,4);
  puVar3 = param_3;
  if ((void *)*param_3 != (void *)0x0) {
    if ((DVar4 != 0xffffffff) && (local_8 == param_3[1])) goto LAB_00544c9c;
    free((void *)*param_3);
  }
  FUN_00544990(pHVar2,0,0,&param_1);
  pvVar5 = malloc((size_t)param_1);
  *puVar3 = pvVar5;
  iVar6 = FUN_00544990(pHVar2,pvVar5,param_1,&param_1);
  if (iVar6 == 0) {
    free((void *)*puVar3);
    *puVar3 = 0;
    return extraout_EAX & 0xffff0000;
  }
  puVar3[1] = local_8;
LAB_00544c9c:
  uVar9 = param_2;
  iVar6 = FUN_00544b10(*puVar3,param_2,&local_4);
  if (iVar6 != 0) {
    iVar6 = FUN_00544670(*puVar3);
    iVar7 = FUN_00544650(*puVar3);
    iVar8 = FUN_00544630(*puVar3);
    local_4 = local_4 & 0xffff;
    uVar1 = *(ushort *)(iVar6 + local_4 * 2);
    if (uVar1 == 0) {
      uVar9 = (uint)*(ushort *)(iVar7 + local_4 * 2) + (uVar9 & 0xffff) & 0x8000ffff;
    }
    else {
      uVar1 = *(ushort *)
               (iVar6 + ((uVar9 & 0xffff) +
                        local_4 + ((uint)(uVar1 >> 1) - (uint)*(ushort *)(iVar8 + local_4 * 2))) * 2
               );
      if (uVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)*(ushort *)(iVar7 + local_4 * 2) + (uint)uVar1 & 0x8000ffff;
      }
    }
    return uVar9;
  }
  return 0;
}


