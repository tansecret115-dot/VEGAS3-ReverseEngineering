/* Module: vegas30.exe
   Function: FUN_0047c230
   Address: 0047c230
   Source: Ghidra pseudocode (Stage 10 batch) */


char FUN_0047c230(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  uVar2 = param_3;
  iVar3 = param_2;
  uVar1 = param_1;
  cVar5 = '\0';
  if ((*(byte *)(param_2 + 0xc) & 4) != 0) {
    return '\0';
  }
  param_2 = **(uint **)(param_2 + 0x30);
  param_1 = FUN_00479820(param_1,iVar3,param_3,param_4,0);
  if (param_1 < param_2) {
    cVar5 = '\x01';
    iVar3 = FUN_00478b00(param_1,iVar3,uVar1);
    if (iVar3 != 0) {
      return '\x03';
    }
  }
  else {
    iVar4 = FUN_00479ce0(uVar1,iVar3,uVar2,param_4,&param_1,0);
    if (iVar4 != 0) {
      iVar3 = FUN_0047c2d0(uVar1,iVar3,uVar2);
      cVar5 = (iVar3 != 0) + '\x02';
    }
  }
  return cVar5;
}


