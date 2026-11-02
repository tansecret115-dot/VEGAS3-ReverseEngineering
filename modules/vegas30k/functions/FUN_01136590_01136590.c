/* Module: vegas30k.dll
   Function: FUN_01136590
   Address: 01136590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01136590(int *param_1)

{
  int *piVar1;
  undefined4 unaff_EDI;
  int *piVar2;
  
  piVar1 = (int *)param_1[9];
  piVar2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  FUN_01137930();
  (**(code **)(*param_1 + 0xc))(param_1,piVar1,param_1 + 0xf);
  FUN_011364d0(piVar2,unaff_EDI);
  (**(code **)(*piVar1 + 8))(piVar1);
  return 1;
}


