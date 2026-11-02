/* Module: mp3rw.dll
   Function: FUN_00479600
   Address: 00479600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479600(int *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 != (byte *)0x0) &&
     (uVar2 = FUN_00479480(param_1,param_2,(int *)&param_2), pbVar1 = param_3, uVar2 != 0)) {
    if ((param_3 == (byte *)0x0) || (uVar3 = param_4, *param_3 == 0)) {
      uVar3 = 0;
    }
    FUN_004788d0(param_1,(byte *)&DAT_004a6e74,uVar2 + 1 + uVar3);
    FUN_00478920(param_1,param_2,uVar2 + 1);
    if (uVar3 != 0) {
      FUN_00478920(param_1,pbVar1,uVar3);
    }
    FUN_00478950(param_1);
    FUN_00475ac0((int)param_1,param_2);
    return;
  }
  FUN_00475b80((int)param_1,"Empty keyword in tEXt chunk");
  return;
}


