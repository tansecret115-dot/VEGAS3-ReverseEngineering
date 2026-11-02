/* Module: vidpcore.dll
   Function: FUN_5df12ac0
   Address: 5df12ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5df12ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  
  uVar1 = FUN_5df11880(*param_1,0);
  uVar1 = FUN_5df118c0(param_1[2],uVar1);
  uVar1 = FUN_5df118c0(param_1[3],uVar1);
  uVar1 = FUN_5df118c0(param_1[4],uVar1);
  uVar1 = FUN_5df118c0(param_1[9],uVar1);
  uVar1 = FUN_5df118c0(param_1[5],uVar1);
  cVar3 = param_1[1] != 0;
  if (param_1[6] != 0) {
    cVar3 = cVar3 + '\x02';
  }
  if (param_1[7] != 0) {
    cVar3 = cVar3 + '\x04';
  }
  if (param_1[8] != 0) {
    cVar3 = cVar3 + '\b';
  }
  uVar2 = FUN_5df118c0(cVar3,uVar1);
  return uVar2 & 0x7f;
}


