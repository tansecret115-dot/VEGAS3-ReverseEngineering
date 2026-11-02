/* Module: vegas30.exe
   Function: FUN_00453f70
   Address: 00453f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453f70(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc2c);
  if (uVar5 != 0) {
    if (*(int *)(param_1 + 0xc30) == 0) {
      uVar2 = *(uint *)(param_1 + 0xc28);
    }
    else {
      uVar4 = uVar5 + 1;
      if (4 < uVar4) {
        uVar4 = 5;
      }
      uVar2 = (*(int *)(param_1 + 0xc28) + 1) % (int)uVar4;
      if ((uVar5 < 5) && (uVar2 == uVar5)) {
        uVar2 = uVar2 - 1;
        uVar5 = uVar4;
      }
      else {
        uVar5 = uVar4;
        if (uVar2 == *(uint *)(param_1 + 0xc34)) {
          uVar2 = (int)((uVar2 - 1) + uVar4) % (int)uVar4;
        }
      }
    }
    *(int *)(param_1 + 0xc28) = (int)((uVar2 - 1) + uVar5) % (int)uVar5;
    iVar3 = (uVar2 + 0xbe) * 0x10;
    iVar1 = *(int *)(iVar3 + param_1);
    iVar3 = *(int *)(iVar3 + 4 + param_1);
    if (iVar1 != 0 || iVar3 != 0) {
      FUN_00453340(param_1,*(undefined4 *)(uVar2 * 0x10 + 0xbd8 + param_1),
                   *(undefined4 *)(uVar2 * 0x10 + 0xbdc + param_1),iVar1,iVar3,0xa1);
    }
  }
  return;
}


