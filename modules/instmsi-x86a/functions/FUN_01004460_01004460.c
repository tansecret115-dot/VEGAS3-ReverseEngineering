/* Module: InstMsi-x86a.exe
   Function: FUN_01004460
   Address: 01004460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_01004460(int param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  BOOL BVar4;
  int iVar5;
  CHAR local_108 [260];
  
  if (DAT_0100ae78 == 0) {
    if (param_1 == 0) {
      iVar3 = FUN_010045c5(param_2);
      return iVar3;
    }
    if (param_1 == 1) {
      return 0;
    }
    if (param_1 == 2) {
      if (DAT_0100aa78 != (HWND)0x0) {
        SetDlgItemTextA(DAT_0100aa78,0x837,*(LPCSTR *)(param_2 + 4));
      }
      iVar3 = FUN_01003ea4(local_108,0x104,&DAT_0100ae84,*(LPCSTR *)(param_2 + 4));
      if (iVar3 != 0) {
        iVar3 = FUN_01003f0b(local_108);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_0100411a(local_108,0x8302);
        if ((iVar3 != -1) && (iVar5 = FUN_01003f8e(local_108), iVar5 != 0)) {
          _DAT_0100b094 = _DAT_0100b094 + 1;
          return iVar3;
        }
      }
    }
    else {
      if (param_1 != 3) {
        if (param_1 != 4) {
          return 0;
        }
        iVar3 = FUN_0100445c();
        return iVar3;
      }
      iVar3 = FUN_01003ea4(local_108,0x104,&DAT_0100ae84,*(LPCSTR *)(param_2 + 4));
      if ((iVar3 != 0) &&
         (bVar1 = FUN_010043c8(*(int *)(param_2 + 0x14),*(WORD *)(param_2 + 0x18),
                               *(WORD *)(param_2 + 0x1a)), CONCAT31(extraout_var,bVar1) != 0)) {
        FUN_010042f4(*(int *)(param_2 + 0x14));
        uVar2 = FUN_0100442e(*(ushort *)(param_2 + 0x1c));
        BVar4 = SetFileAttributesA(local_108,CONCAT22(extraout_var_00,uVar2));
        return (-(uint)(BVar4 != 0) & 2) - 1;
      }
    }
  }
  else if (param_1 == 3) {
    FUN_010042f4(*(int *)(param_2 + 0x14));
  }
  return -1;
}


