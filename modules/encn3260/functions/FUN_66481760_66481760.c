/* Module: encn3260.dll
   Function: FUN_66481760
   Address: 66481760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66481760(int param_1,int *param_2,int *param_3)

{
  (**(code **)(*param_3 + 0x2c))(param_3,s_Username_664e20b0,*(undefined4 *)(param_1 + 0x28));
  (**(code **)(*param_3 + 0x2c))(param_3,s_Password_664e20a4,*(undefined4 *)(param_1 + 0x2c));
  (**(code **)(*param_2 + 0xc))(param_2,0,param_3);
  return 0;
}


