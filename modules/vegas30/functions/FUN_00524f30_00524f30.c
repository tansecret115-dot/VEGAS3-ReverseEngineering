/* Module: vegas30.exe
   Function: FUN_00524f30
   Address: 00524f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00524f30(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_240;
  uint local_23c;
  undefined1 local_238 [16];
  uchar local_228 [260];
  byte local_124;
  undefined1 local_11c [276];
  byte local_8;
  
  FUN_00508ba0(param_3,local_238);
  if (DAT_0064b4e4 == 0) {
    iVar1 = FUN_00601ab0(&local_240,&local_23c,1);
    if (iVar1 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar2 = (local_23c & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar2) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_240;
        DAT_0064b4e4 = uVar2;
      }
    }
  }
  if (((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) && ((local_124 & 1) != 0)) {
    return 0;
  }
  if (&stack0x00000000 == (undefined1 *)0x228) {
    iVar1 = 0;
  }
  else {
    iVar1 = lstrlenA((LPCSTR)local_228);
    iVar1 = iVar1 + 1;
  }
  hMem = GlobalAlloc(0x40,iVar1 + 0x17);
  puVar3 = GlobalLock(hMem);
  *param_2 = (int)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    if ((local_124 & 2) != 0) {
      *(uint *)*param_2 = *(uint *)*param_2 | 0x10000;
      iVar1 = FUN_00508b80(param_3);
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          uVar4 = FUN_00508c00(param_3,iVar5);
          FUN_00508ba0(uVar4,local_11c);
          if ((local_8 & 2) != 0) {
            *(uint *)*param_2 = *(uint *)*param_2 | 0x20000;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
    }
    if ((local_124 & 4) != 0) {
      *(uint *)*param_2 = *(uint *)*param_2 | 0x180000;
    }
    if ((local_124 & 8) == 0) {
      *(uint *)*param_2 = *(uint *)*param_2 | 0x40000;
    }
    if ((local_124 & 2) == 0) {
      if ((local_124 & 0x20) == 0) {
        if ((local_124 & 1) == 0) {
          if ((local_124 & 0x80) == 0) {
            *(uint *)*param_2 = *(uint *)*param_2 | 0x80000;
            *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x19c);
            iVar1 = *param_2;
            uVar4 = *(undefined4 *)(param_1 + 0x19c);
          }
          else {
            *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1ac);
            iVar1 = *param_2;
            uVar4 = *(undefined4 *)(param_1 + 0x1ac);
          }
        }
        else if ((local_124 & 0x80) == 0) {
          *(uint *)*param_2 = *(uint *)*param_2 | 0x80000;
          *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1a4);
          iVar1 = *param_2;
          uVar4 = *(undefined4 *)(param_1 + 0x1a4);
        }
        else {
          *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1b4);
          iVar1 = *param_2;
          uVar4 = *(undefined4 *)(param_1 + 0x1b4);
        }
      }
      else if ((local_124 & 1) == 0) {
        if ((local_124 & 0x80) == 0) {
          *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1a0);
          iVar1 = *param_2;
          uVar4 = *(undefined4 *)(param_1 + 0x1a0);
        }
        else {
          *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1b0);
          iVar1 = *param_2;
          uVar4 = *(undefined4 *)(param_1 + 0x1b0);
        }
      }
      else if ((local_124 & 0x80) == 0) {
        *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1a8);
        iVar1 = *param_2;
        uVar4 = *(undefined4 *)(param_1 + 0x1a8);
      }
      else {
        *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1b8);
        iVar1 = *param_2;
        uVar4 = *(undefined4 *)(param_1 + 0x1b8);
      }
    }
    else {
      *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x194);
      iVar1 = *param_2;
      uVar4 = *(undefined4 *)(param_1 + 0x198);
    }
    *(undefined4 *)(iVar1 + 8) = uVar4;
    *(undefined4 *)(*param_2 + 0xc) = param_3;
    iVar1 = lstrlenA((LPCSTR)local_228);
    *(short *)(*param_2 + 0x10) = (short)iVar1 + 1;
    *(undefined2 *)(*param_2 + 0x12) = 0;
    _mbscpy((uchar *)(*param_2 + 0x14),local_228);
  }
  return 1;
}


