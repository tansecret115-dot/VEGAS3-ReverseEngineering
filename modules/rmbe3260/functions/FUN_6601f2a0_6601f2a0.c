/* Module: rmbe3260.dll
   Function: FUN_6601f2a0
   Address: 6601f2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6601f2a0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = *(int **)(param_2 + 0x144);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
  }
  if (iVar2 < 0) {
    (**(code **)(*(int *)(param_2 + 0x18) + 0xc))
              (param_2 + 0x18,1,iVar2,iVar2,s_Write_Data_Failed_in_PNEngineCal_6606dc70,
               s_www_real_com_6606dc98);
  }
  return;
}


