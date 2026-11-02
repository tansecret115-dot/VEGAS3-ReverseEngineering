/* Module: rmme3260.dll
   Function: FUN_6624b150
   Address: 6624b150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6624b150(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (((*param_2 & 0x100) != 0) && ((*param_2 & 2) != 0)) {
    iVar1 = (**(code **)(*(int *)param_2[0x10e] + 0x84))
                      ((int *)param_2[0x10e],param_4,*(undefined4 *)(param_1 + 0xb68),param_3,
                       param_5,0);
    if (iVar1 == -0x7789fe3e) {
      (**(code **)(**(int **)(param_1 + 0xb68) + 0x6c))(*(int **)(param_1 + 0xb68));
      (**(code **)(*(int *)param_2[0x10e] + 0x6c))((int *)param_2[0x10e]);
      (**(code **)(*(int *)param_2[0x10e] + 0x84))
                ((int *)param_2[0x10e],param_4,*(undefined4 *)(param_1 + 0xb68),param_3,param_5,0);
    }
  }
  return 0x80004005;
}


