/* Module: vegas30.exe
   Function: FUN_004bbd70
   Address: 004bbd70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_004bbd70(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_c;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x600);
  }
  else {
    uVar9 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
  }
  puVar3 = (uint *)FUN_005b89b0(DAT_0064b138);
  if ((puVar3 == (uint *)0x0) || (uVar1 = *puVar3, uVar1 == 0)) {
    if (-1 < param_4) {
      return uVar9;
    }
    return 0;
  }
  local_c = 0;
  uVar6 = 0;
  uVar8 = 0;
  if (uVar1 != 0) {
    piVar4 = (int *)puVar3[2];
    do {
      puVar3 = (uint *)*piVar4;
      if ((((byte *)puVar3[10] == (byte *)0x0) || ((*(byte *)puVar3[10] & 1) == 0)) ||
         (uVar5 = uVar6, uVar7 = uVar8, param_5 != 0)) {
        uVar5 = puVar3[1];
        uVar7 = *puVar3;
        if (((param_3 <= (int)uVar5) && ((param_3 < (int)uVar5 || (param_2 <= uVar7)))) &&
           (param_4 < 0)) break;
        if (((param_3 <= (int)uVar5) && ((param_3 < (int)uVar5 || (param_2 < uVar7)))) &&
           (0 < param_4)) {
          uVar6 = puVar3[1];
          uVar8 = *puVar3;
          break;
        }
      }
      piVar4 = piVar4 + 1;
      local_c = local_c + 1;
      uVar6 = uVar5;
      uVar8 = uVar7;
    } while (local_c < uVar1);
  }
  uVar2 = CONCAT44(uVar6,uVar8);
  if ((local_c == uVar1) && (uVar2 = CONCAT44(uVar6,uVar8), 0 < param_4)) {
    uVar2 = uVar9;
  }
  return uVar2;
}


