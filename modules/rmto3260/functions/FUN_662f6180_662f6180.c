/* Module: rmto3260.dll
   Function: FUN_662f6180
   Address: 662f6180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f6180(uint param_1,void *param_2,undefined4 *param_3)

{
  void *this;
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  this = param_2;
  uVar3 = 0;
  uVar1 = 0x80004005;
  if (DAT_6630b8d0 != 0) {
    puVar4 = &DAT_6630b7b0;
    while (param_1 != *puVar4) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
      if (DAT_6630b8d0 <= uVar3) {
        return uVar1;
      }
    }
    iVar5 = uVar3 * 0x18;
    puVar4 = &param_1;
    param_1 = 0xff;
    uVar1 = *(undefined4 *)(iVar5 + 0x6630b7c0);
    uVar6 = *(undefined4 *)(iVar5 + 0x6630b7bc);
    pcVar2 = (char *)FUN_662ef590(param_2,0x100);
    FUN_662f3080(*(char **)(iVar5 + 0x6630b7b4),*(undefined4 *)(iVar5 + 0x6630b7b8),pcVar2,puVar4,
                 uVar6,uVar1);
    FUN_662ef610(this,-1);
    *param_3 = *(undefined4 *)(iVar5 + 0x6630b7c4);
    uVar1 = 0;
  }
  return uVar1;
}


