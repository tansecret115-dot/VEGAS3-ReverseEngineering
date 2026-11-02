/* Module: Setup.exe
   Function: FUN_00409f50
   Address: 00409f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00409f50(int param_1)

{
  int iVar1;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    MultiByteToWideChar(0,1,"SEA Stub File",-1,local_208,0x104);
    local_2 = 0;
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
  }
  iVar1 = FUN_00409fe0(*(HANDLE *)(param_1 + 8),0,0,*(uint *)(param_1 + 0x890),
                       *(int *)(param_1 + 0x894),*(HANDLE *)(param_1 + 0xc),0,0);
  if ((-1 < iVar1) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
  }
  return iVar1;
}


