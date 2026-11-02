/* Module: vegas30.exe
   Function: FUN_00494530
   Address: 00494530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004945fc) */
/* WARNING: Removing unreachable block (ram,0x004945b4) */
/* WARNING: Removing unreachable block (ram,0x004945d6) */
/* WARNING: Removing unreachable block (ram,0x0049461e) */

uint FUN_00494530(int param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int local_c [3];
  
  local_c[0] = -1;
  lVar7 = FUN_004bbb60(param_1,param_2,param_3,param_4,local_c);
  uVar4 = (uint)lVar7;
  if ((DAT_00647794 < 2) && ((*(uint *)(param_1 + 0x18) & 0x100) != 0)) {
    puVar1 = (uint *)(param_1 + 0xb48);
    uVar2 = *puVar1;
    iVar3 = *(int *)(param_1 + 0xb4c);
    uVar5 = *(uint *)(param_1 + 0xb50) + uVar2;
    iVar6 = *(int *)(param_1 + 0xb54) + iVar3 + (uint)CARRY4(*(uint *)(param_1 + 0xb50),uVar2);
    if (param_4 < 0) {
      if (((param_3 < iVar6) || ((param_3 <= iVar6 && (param_2 <= uVar5)))) ||
         (CONCAT44(iVar6,uVar5) <= lVar7)) {
        if ((iVar3 <= param_3) &&
           (((iVar3 < param_3 || (uVar2 < param_2)) && (lVar7 < *(longlong *)puVar1)))) {
          local_c[0] = 0;
          uVar4 = uVar2;
        }
      }
      else {
        local_c[0] = 0;
        uVar4 = uVar5;
      }
    }
    else {
      if ((param_3 <= iVar3) &&
         (((param_3 < iVar3 || (param_2 < uVar2)) && (*(longlong *)puVar1 < lVar7)))) {
        local_c[0] = 0;
        lVar7 = *(longlong *)puVar1;
      }
      uVar4 = (uint)lVar7;
      if (((param_3 <= iVar6) && ((param_3 < iVar6 || (param_2 < uVar5)))) &&
         (CONCAT44(iVar6,uVar5) < lVar7)) {
        local_c[0] = 0;
        uVar4 = uVar5;
      }
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)(-1 < local_c[0]);
  }
  return uVar4;
}


