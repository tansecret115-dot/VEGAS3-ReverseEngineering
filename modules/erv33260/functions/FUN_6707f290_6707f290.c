/* Module: erv33260.dll
   Function: FUN_6707f290
   Address: 6707f290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707f290(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char local_18;
  char local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar2 = *(uint *)(param_1 + 0xa4);
  iVar7 = *(int *)(param_1 + 0x90);
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = 0;
      if (uVar1 != 0) {
        iVar6 = iVar7;
        do {
          if (uVar4 < 2) {
            local_10 = (uint)(byte)((char)uVar4 * '\x10' + 0xe);
          }
          else {
            local_10 = 0x20;
          }
          if (local_8 < 2) {
            cVar5 = (char)local_8 * '\x10' + '\x0e';
          }
          else {
            cVar5 = ' ';
          }
          if (uVar4 < uVar1 - 2) {
            local_c = 0x20;
          }
          else {
            local_14 = (char)uVar1;
            local_c = (uint)(byte)(((char)uVar4 * '\x0f' + local_14) * '\x10' - 2);
          }
          if (local_8 < uVar2 - 2) {
            cVar3 = ' ';
          }
          else {
            local_18 = (char)uVar2;
            cVar3 = ((char)local_8 * '\x0f' + local_18) * '\x10' + -2;
          }
          iVar7 = iVar6 + 0x10;
          *(uint *)(iVar6 + 0xc) = ((uint)CONCAT11(cVar3,cVar5) << 8 | local_c) << 8 | local_10;
          uVar4 = uVar4 + 1;
          iVar6 = iVar7;
        } while (uVar4 < uVar1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
  }
  return;
}


