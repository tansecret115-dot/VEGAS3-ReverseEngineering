/* Module: vegas30.exe
   Function: FUN_0047eb20
   Address: 0047eb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047eb50) */

undefined4
FUN_0047eb20(int param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (((param_4 == '\x03') || (param_4 == '\x01')) &&
     (piVar1 = *(int **)(param_1 + 0x18), piVar1 != (int *)0x0)) {
    iVar4 = *(int *)(param_1 + 0x44);
    if ((iVar4 < 0) || (*piVar1 + -1 < iVar4)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar1[2] + iVar4 * 4);
    }
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0xc) & 4) == 0)) {
      uVar2 = FUN_00479820(param_1,iVar4,param_2,param_3,0);
      puVar3 = *(uint **)(iVar4 + 0x30);
      if (uVar2 < *puVar3) {
        puVar3 = (uint *)(puVar3[1] * uVar2 + puVar3[2]);
        local_10 = *puVar3;
        local_c = puVar3[1];
        local_8 = puVar3[2];
        uVar2 = *(uint *)(param_1 + 0x14);
        local_4 = puVar3[3];
        if (((int)uVar2 <= (int)local_c) &&
           (((int)uVar2 < (int)local_c || (*(uint *)(param_1 + 0x10) <= local_10)))) {
          local_10 = *(uint *)(param_1 + 0x10);
          local_c = uVar2;
        }
        FUN_00478580(param_5,param_6,&local_10,param_1,iVar4);
        return 1;
      }
    }
  }
  return 0;
}


