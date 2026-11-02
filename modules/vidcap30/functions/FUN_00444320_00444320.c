/* Module: vidcap30.exe
   Function: FUN_00444320
   Address: 00444320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444320(int param_1)

{
  WCHAR local_208 [259];
  undefined2 local_2;
  
  FUN_0042f4b0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),1);
  if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
    MultiByteToWideChar(0,1,*(LPCSTR *)(param_1 + 0x14),-1,local_208,0x104);
    local_2 = 0;
    FUN_0045b7b0(0x664,local_208,0x208);
  }
  FUN_0042f5d0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),1);
  return;
}


