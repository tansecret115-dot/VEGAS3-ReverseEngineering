/* Module: mp3plug.dll
   Function: FUN_5f70d5d0
   Address: 5f70d5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_5f70d5d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = 0;
  puVar4 = (undefined4 *)0x0;
  while( true ) {
    if (((int)(&DAT_5f74bb54)[uVar2 * 4] <= param_2) && (param_2 <= (int)(&DAT_5f74bb58)[uVar2 * 4])
       ) {
      if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 3)) {
        puVar4 = (undefined4 *)FUN_5f6d9760(0x1e4);
        if (puVar4 != (undefined4 *)0x0) {
          puVar5 = *(undefined4 **)(uVar2 * 0x10 + 0x5f74bb5c);
          puVar6 = puVar4;
          for (iVar1 = 0x79; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
      else if ((param_1 == 2) &&
              (puVar4 = (undefined4 *)FUN_5f6d9760(0x1e4), puVar4 != (undefined4 *)0x0)) {
        puVar5 = *(undefined4 **)(uVar2 * 0x10 + 0x5f74bb60);
        puVar6 = puVar4;
        for (iVar1 = 0x79; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      if (param_4 == 1) {
        FUN_5f6d5f70((float *)&DAT_5f74baf0,(float *)(puVar4 + 0x1b),(float *)(puVar4 + 0x1b),0x19);
      }
      return puVar4;
    }
    uVar3 = uVar2 + 1;
    if (9 < uVar3) {
      return (undefined4 *)0x0;
    }
    if (((int)(&DAT_5f74bb54)[uVar3 * 4] <= param_2) && (param_2 <= (int)(&DAT_5f74bb58)[uVar3 * 4])
       ) break;
    uVar2 = uVar2 + 2;
    if (9 < uVar2) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_1 == 0) || ((param_1 == 1 || (param_1 == 3)))) {
    puVar4 = (undefined4 *)FUN_5f6d9760(0x1e4);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(uVar3 * 0x10 + 0x5f74bb5c);
      puVar6 = puVar4;
      for (iVar1 = 0x79; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
  }
  else if ((param_1 == 2) &&
          (puVar4 = (undefined4 *)FUN_5f6d9760(0x1e4), puVar4 != (undefined4 *)0x0)) {
    puVar5 = *(undefined4 **)(uVar3 * 0x10 + 0x5f74bb60);
    puVar6 = puVar4;
    for (iVar1 = 0x79; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if (param_4 != 1) {
    return puVar4;
  }
  FUN_5f6d5f70((float *)&DAT_5f74baf0,(float *)(puVar4 + 0x1b),(float *)(puVar4 + 0x1b),0x19);
  return puVar4;
}


