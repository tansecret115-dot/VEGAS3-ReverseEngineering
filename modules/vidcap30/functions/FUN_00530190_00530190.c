/* Module: vidcap30.exe
   Function: FUN_00530190
   Address: 00530190
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00530190(int param_1)

{
  int iVar1;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    MultiByteToWideChar(0,1,"SEA Stub File",-1,local_208,0x104);
    local_2 = 0;
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
  }
  iVar1 = FUN_00530220(*(undefined4 *)(param_1 + 8),0,0,*(undefined4 *)(param_1 + 0x890),
                       *(undefined4 *)(param_1 + 0x894),*(undefined4 *)(param_1 + 0xc),0,0);
  if ((-1 < iVar1) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
  }
  return iVar1;
}


