/* Module: stl2plg.dll
   Function: FUN_00403dd0
   Address: 00403dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403dd0(HANDLE param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  BOOL BVar3;
  
  puVar2 = param_2;
  BVar3 = ReadFile(param_1,param_2,6,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar3 != 0) {
    uVar1 = *(uint *)(puVar2 + 1);
    *puVar2 = CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8));
    *(uint *)(puVar2 + 1) =
         (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  }
  return;
}


