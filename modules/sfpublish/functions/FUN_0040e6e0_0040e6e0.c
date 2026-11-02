/* Module: sfpublish.dll
   Function: FUN_0040e6e0
   Address: 0040e6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040e6e0(int param_1)

{
  HMODULE hModule;
  undefined4 uVar1;
  CHAR *lpFilename;
  DWORD nSize;
  CHAR local_158 [260];
  undefined2 local_54 [8];
  undefined2 local_44 [8];
  undefined2 local_34 [8];
  undefined2 local_24 [8];
  undefined2 local_14 [4];
  undefined4 local_c;
  
  FUN_004328f0();
  lpFilename = local_158;
  nSize = 0x104;
  local_158[0] = '\0';
  hModule = (HMODULE)FUN_004012c0();
  GetModuleFileNameA(hModule,lpFilename,nSize);
  FUN_00418d60(&stack0xfffffe9c,(BYTE *)"res://%s/%d");
  local_24[0] = 0;
  FUN_0040fe10(local_24,&stack0xfffffe9c);
  local_14[0] = 3;
  local_c = 2;
  local_44[0] = 0;
  local_54[0] = 0;
  local_34[0] = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0xd0))
                    (*(int **)(param_1 + 0x50),local_24,local_14,local_44,local_54,local_34);
  Ordinal_9(local_34);
  Ordinal_9(local_54);
  Ordinal_9(local_44);
  Ordinal_9(local_14);
  Ordinal_9(local_24);
  return uVar1;
}


