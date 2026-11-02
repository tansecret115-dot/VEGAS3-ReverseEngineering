/* Module: mp3rw.dll
   Function: FUN_0040f110
   Address: 0040f110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040f248) */
/* WARNING: Removing unreachable block (ram,0x0040f2c2) */

int FUN_0040f110(void)

{
  BYTE *pBVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  code *pcVar8;
  BYTE *in_stack_00001370;
  uint *in_stack_00001374;
  int in_stack_00001378;
  undefined4 in_stack_0000137c;
  uint uVar9;
  
  FUN_0048b360();
  pcVar5 = "Sonic Foundry Online Registration";
  puVar7 = (undefined4 *)&stack0x00000164;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)pcVar5;
  pcVar5 = "www.sonicfoundry.com";
  pcVar6 = &stack0x0000002c;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  *pcVar6 = *pcVar5;
  pcVar5 = "/Registration/request.asp";
  puVar7 = (undefined4 *)&stack0x00000044;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)pcVar5;
  iVar3 = lstrcmpA((LPCSTR)(in_stack_00001378 + 0xc),"None");
  pcVar8 = _mbscpy_exref;
  puVar7 = (undefined4 *)&stack0x00000060;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  _mbscpy(&stack0x00000060,"");
  iVar4 = FUN_00404570(&stack0x00000188);
  if (iVar4 < 0) goto LAB_0040f43a;
  FUN_00420fe0(&stack0x0000039c,(BYTE *)"http://%s/%s");
  if (*(int *)(in_stack_00001378 + 0x194) == 0) {
    iVar4 = FUN_0040e430();
  }
  else {
    iVar4 = FUN_0040e300();
  }
  pcVar8 = _mbscpy_exref;
  if ((iVar4 < 0) ||
     (iVar4 = FUN_0040e860(0,in_stack_00001370,in_stack_00001378,in_stack_00001374,&stack0x00000060)
     , pcVar8 = _mbscpy_exref, iVar4 < 0)) goto LAB_0040f43a;
  FUN_00420fe0(&stack0x0000039c,(BYTE *)"http://%s/%s");
  iVar4 = FUN_0040eb50();
  pcVar8 = _mbscpy_exref;
  if ((iVar4 < 0) ||
     (iVar4 = FUN_0040ed60(0,(uint)(iVar3 == 0),in_stack_0000137c,&stack0x00000060),
     pcVar8 = _mbscpy_exref, iVar4 < 0)) goto LAB_0040f43a;
  if (iVar4 == 0x4e133) goto LAB_0040f42c;
  if (*(int *)(in_stack_00001378 + 0x19c) == 0) {
    uVar9 = *(uint *)(in_stack_00001378 + 4);
    iVar3 = 1;
  }
  else {
    uVar9 = *(uint *)(in_stack_00001378 + 4);
    iVar3 = 3;
  }
  iVar4 = FUN_00412e10(DAT_004a8128,&stack0x00000004,iVar3,uVar9);
  pcVar8 = _mbscpy_exref;
  if ((iVar4 < 0) ||
     (iVar4 = FUN_004106b0(DAT_004a8128,&stack0x00000004), pcVar8 = _mbscpy_exref, iVar4 < 0))
  goto LAB_0040f43a;
  iVar4 = FUN_00411120(DAT_004a8128,(HKEY)&stack0x00000004,(int *)&stack0x00000024);
  if (-1 < iVar4) goto LAB_0040f4f7;
  switch(iVar4) {
  case -0x7ffb1ed2:
    puVar2 = FUN_0041f9f0(DAT_004a811c,0x272d);
    break;
  case -0x7ffb1ed1:
    uVar9 = 0x272e;
    goto LAB_0040f411;
  case -0x7ffb1ed0:
    puVar2 = FUN_0041f9f0(DAT_004a811c,0x2730);
    break;
  case -0x7ffb1ecf:
    puVar2 = FUN_0041f9f0(DAT_004a811c,0x272f);
    break;
  default:
    uVar9 = 0x2732;
LAB_0040f411:
    puVar2 = FUN_0041f9f0(DAT_004a811c,uVar9);
    break;
  case -0x7ffb1ecc:
    puVar2 = FUN_0041f9f0(DAT_004a811c,0x2726);
    break;
  case -0x7ffb1ecb:
    puVar2 = FUN_0041f9f0(DAT_004a811c,0x272c);
    _mbscpy(&stack0x00000060,puVar2);
    pBVar1 = FUN_0041f9f0(DAT_004a811c,0x272c);
    FUN_00420fe0(&stack0x00000060,pBVar1);
    goto LAB_0040f42c;
  }
  _mbscpy(&stack0x00000060,puVar2);
LAB_0040f42c:
  pcVar8 = _mbscpy_exref;
  if (iVar4 < 0) {
LAB_0040f43a:
    iVar3 = lstrcmpA(&stack0x00000060,"");
    if (iVar3 == 0) {
      if (-1 < iVar4) goto LAB_0040f4f7;
      FUN_0041f9f0(DAT_004a811c,0x28c1);
      (*pcVar8)();
      uVar9 = *(uint *)(in_stack_00001378 + 0x198);
    }
    else {
      uVar9 = *(uint *)(in_stack_00001378 + 0x198);
    }
    if (2 < uVar9) {
      _mbscat(&stack0x00000060," ");
      puVar2 = FUN_0041f9f0(DAT_004a811c,0x28c0);
      _mbscat(&stack0x00000060,puVar2);
    }
    (*pcVar8)();
    PostMessageA(DAT_004a84dc,0x6cc,(WPARAM)&stack0x00000004,0);
    PostMessageA(DAT_004a84dc,0x6c8,in_stack_00001378 + 0x8c,0);
  }
  else {
LAB_0040f4f7:
    PostMessageA(DAT_004a84dc,0x6cc,(WPARAM)&stack0x00000004,0);
    PostMessageA(DAT_004a84dc,0x6c8,0,0);
    FUN_00412cf0(DAT_004a8128,(HKEY)0x1,*(HKEY *)(in_stack_00001378 + 4));
    FUN_00411740(DAT_004a8128,(uint)(*(int *)(in_stack_00001378 + 0x194) == 0));
    FUN_00412f90(DAT_004a8128,(int *)&stack0x00000020,(int *)&stack0x00000028,1);
  }
  FUN_00404640((int)&stack0x00000188);
  return iVar4;
}


