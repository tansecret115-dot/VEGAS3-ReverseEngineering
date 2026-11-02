/* Module: wmfplug2.dll
   Function: FUN_0040a640
   Address: 0040a640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a640(int param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = 0;
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  if (piVar1[4] == 3) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = piVar1[8] << 2;
  }
  uVar3 = *piVar1 + iVar5;
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar3;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (uVar3 <= param_3) {
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_2 = *puVar6;
        puVar6 = puVar6 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      return uVar2;
    }
    uVar2 = 0x8007000e;
  }
  return uVar2;
}


