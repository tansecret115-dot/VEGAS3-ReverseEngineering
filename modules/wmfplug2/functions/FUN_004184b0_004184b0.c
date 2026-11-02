/* Module: wmfplug2.dll
   Function: FUN_004184b0
   Address: 004184b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004184b0(undefined4 param_1,LPSTR param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  CHAR local_100 [256];
  
  uVar1 = ftol();
  uVar2 = ftol();
  FUN_0041fa90(DAT_00489d58,0xba,local_100,0xff);
  uVar3 = ftol();
  uVar4 = ftol(uVar3 % 100);
  wsprintfA(param_2,local_100,uVar1,uVar2,uVar4);
  return;
}


