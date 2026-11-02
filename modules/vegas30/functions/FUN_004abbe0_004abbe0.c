/* Module: vegas30.exe
   Function: FUN_004abbe0
   Address: 004abbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004abbe0(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  if ((param_2 != (uint *)0x0) && ((*param_2 & 0x200000) == 0)) {
    iVar3 = param_3;
    if (param_3 == 0) {
      iVar3 = FUN_004aac00(param_1);
    }
    uVar1 = param_2[2];
    uVar2 = param_2[0x12];
    uVar5 = 0;
    if (0 < (int)uVar1) {
      puVar4 = param_2 + 0x1c;
      do {
        if (((uVar5 < param_2[2]) && (puVar4 != (uint *)0x0)) && ((*puVar4 & 1) != 0)) {
          if ((code *)puVar4[0x19] != (code *)0x0) {
            (*(code *)puVar4[0x19])(iVar3,puVar4 + 0x15,uVar2,puVar4);
          }
          *puVar4 = *puVar4 & 0xfffffffe;
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x1a;
      } while ((int)uVar5 < (int)uVar1);
    }
    if (iVar3 != param_3) {
      FUN_004aac70(param_1,iVar3);
    }
  }
  return;
}


