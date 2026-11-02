/* Module: mp3rw.dll
   Function: FUN_00405190
   Address: 00405190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405190(HWND param_1,int param_2)

{
  BYTE *pBVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  uint uVar4;
  UINT UVar5;
  undefined1 local_108 [4];
  uchar local_104 [260];
  
  if (-1 < param_2) {
    return;
  }
  switch(param_2) {
  case -0x7ffb1ed3:
    UVar5 = 0x30;
    pCVar3 = FUN_0041f9f0(DAT_004a811c,0x2712);
    uVar4 = 0x2711;
    break;
  case -0x7ffb1ed2:
    uVar4 = 0x272d;
    goto LAB_0040531a;
  case -0x7ffb1ed1:
    UVar5 = 0x30;
    pCVar2 = &DAT_004a82d5;
    pCVar3 = FUN_0041f9f0(DAT_004a811c,0x272e);
    MessageBoxA(param_1,pCVar3,pCVar2,UVar5);
    return;
  case -0x7ffb1ed0:
    uVar4 = 0x2730;
    goto LAB_0040531a;
  case -0x7ffb1ecf:
    UVar5 = 0x30;
    pCVar3 = &DAT_004a82d5;
    uVar4 = 0x272f;
    break;
  default:
    uVar4 = 0x2732;
LAB_0040531a:
    UVar5 = 0x30;
    pCVar2 = &DAT_004a82d5;
    pCVar3 = FUN_0041f9f0(DAT_004a811c,uVar4);
    MessageBoxA(param_1,pCVar3,pCVar2,UVar5);
    return;
  case -0x7ffb1ecd:
    FUN_00416590(DAT_004a8128,local_108);
    pBVar1 = FUN_0041f9f0(DAT_004a811c,0x2731);
    FUN_00420fe0(local_104,pBVar1);
    UVar5 = 0x30;
    pCVar3 = FUN_0041f9f0(DAT_004a811c,0x2712);
    MessageBoxA(param_1,(LPCSTR)local_104,pCVar3,UVar5);
    return;
  case -0x7ffb1ecc:
    UVar5 = 0x30;
    pCVar3 = &DAT_004a82d5;
    uVar4 = 0x2727;
    break;
  case -0x7ffb1ecb:
    pBVar1 = FUN_0041f9f0(DAT_004a811c,0x272c);
    FUN_00420fe0(local_104,pBVar1);
    MessageBoxA(param_1,(LPCSTR)local_104,&DAT_004a82d5,0x30);
    return;
  }
  pCVar2 = FUN_0041f9f0(DAT_004a811c,uVar4);
  MessageBoxA(param_1,pCVar2,pCVar3,UVar5);
  return;
}


