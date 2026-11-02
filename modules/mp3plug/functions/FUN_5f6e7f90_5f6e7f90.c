/* Module: mp3plug.dll
   Function: FUN_5f6e7f90
   Address: 5f6e7f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e7f90(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  
  FUN_5f6e5e80((int)param_4,0x10);
  uVar1 = FUN_5f6ff320(0xffff,0x8005,0x8000,param_1 + -0x10,param_4);
  FUN_5f6e5e80((int)param_4,param_3);
  uVar2 = FUN_5f6ff320(uVar1,0x8005,0x8000,param_2,param_4);
  FUN_5f6e5e80((int)param_4,-(param_1 + param_2 + param_3));
  FUN_5f6e5ec0((int)param_4,-(param_2 + param_3));
  FUN_5f6e62d0(param_4,uVar2 & 0xffff,param_3);
  FUN_5f6e5ec0((int)param_4,param_2);
  return;
}


