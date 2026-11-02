/* Module: sfcdi.dll
   Function: FUN_5bf1afd0
   Address: 5bf1afd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1afd0(HSFCD__ *param_1,undefined4 param_2,undefined4 param_3,uint param_4,LPSTR param_5)

{
  tPARAMETERS_DEVDES *ptVar1;
  bool bVar2;
  HDC hdc;
  LRESULT LVar3;
  uchar *puVar4;
  long lVar5;
  BYTE *pBVar6;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  WPARAM wParam;
  char *pcVar10;
  undefined4 *puVar11;
  uint uStack00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000034;
  WPARAM in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined1 *in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  WPARAM in_stack_00000054;
  int in_stack_00000064;
  undefined4 in_stack_000000dc;
  undefined1 *in_stack_000000e8;
  undefined4 in_stack_00000104;
  undefined1 *in_stack_00000110;
  HWND in_stack_000021b8;
  int *in_stack_000021bc;
  LPSIZE lpsz;
  
  FUN_5bf52dd0();
  pcVar10 = "XXXXXXXX XXXXXXXX XXXX";
  puVar11 = (undefined4 *)&stack0x0000006c;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)pcVar10;
  *(char *)((int)puVar11 + 2) = pcVar10[2];
  wParam = 0;
  in_stack_000021bc[3] = 0;
  GetClientRect(in_stack_000021b8,(LPRECT)&stack0x0000005c);
  hdc = GetDC(in_stack_000021b8);
  lpsz = (LPSIZE)&stack0x0000002c;
  iVar7 = lstrlenA(&stack0x0000006c);
  GetTextExtentPointA(hdc,&stack0x0000006c,iVar7,lpsz);
  uVar9 = in_stack_0000002c + 8;
  ReleaseDC(in_stack_000021b8,hdc);
  puVar11 = &param_2;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  param_2 = 3;
  LVar3 = SendMessageA(in_stack_000021b8,0x1019,0,(LPARAM)&param_2);
  if ((LVar3 == 0) ||
     (LVar3 = SendMessageA(in_stack_000021b8,0x1019,1,(LPARAM)&param_2), LVar3 == 0)) {
    puVar11 = &param_2;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    param_2 = 0xf;
    param_3 = 0;
    param_4 = uVar9;
    param_5 = FUN_5bf283e0(DAT_5bf65fc4,0x4ab);
    SendMessageA(in_stack_000021b8,0x101b,0,(LPARAM)&param_2);
    param_3 = 0;
    param_4 = in_stack_00000064 - uVar9 >> 1;
    param_5 = FUN_5bf283e0(DAT_5bf65fc4,0x4ac);
    SendMessageA(in_stack_000021b8,0x101b,1,(LPARAM)&param_2);
    param_3 = 0;
    param_4 = in_stack_00000064 - uVar9 >> 1;
    param_5 = FUN_5bf283e0(DAT_5bf65fc4,0x4ad);
    SendMessageA(in_stack_000021b8,0x101b,2,(LPARAM)&param_2);
  }
  SendMessageA(in_stack_000021b8,0x1009,0,0);
  uStack00000028 = *(uint *)*in_stack_000021bc;
  uVar9 = 0;
  if (uStack00000028 != 0) {
    do {
      ptVar1 = *(tPARAMETERS_DEVDES **)(*(int *)(*in_stack_000021bc + 8) + uVar9 * 4);
      uVar8 = *(uint *)(ptVar1 + 0x1a0) & 0x2000;
      if ((uVar8 != 0) || ((*(uint *)(ptVar1 + 0x1a0) & 0x4000) != 0)) {
        if (-1 < *(int *)(ptVar1 + 4)) {
          if (uVar8 == 0) {
            _mbscpy(&stack0x00000124,(uchar *)(ptVar1 + 0xc));
            param_1 = (HSFCD__ *)0x0;
            lVar5 = cdr_Open(ptVar1,&param_1);
            if (lVar5 < 0) {
              pBVar6 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4af);
              FUN_5bf25750(&stack0x00000084,pBVar6);
            }
            else {
              lVar5 = cdr_ReadTOC(param_1,(_toc *)&stack0x00000424,0x20,
                                  (_func_int_void_ptr_uint_long *)0x0);
              if (lVar5 < 0) {
                if (lVar5 == -0x7ffb1f37) {
                  pBVar6 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4aa);
                  FUN_5bf25750(&stack0x00000084,pBVar6);
                  in_stack_000021bc[3] = 1;
                }
                else {
                  pBVar6 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4ae);
                  FUN_5bf25750(&stack0x00000084,pBVar6);
                }
              }
              else {
                bVar2 = FUN_5bf2bcc0((int)&stack0x00000424);
                if (CONCAT31(extraout_var,bVar2) == 0) {
                  pBVar6 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4a7);
                  FUN_5bf25750(&stack0x00000084,pBVar6);
                  in_stack_000021bc[3] = 1;
                }
                else {
                  pBVar6 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4a8);
                  FUN_5bf25750(&stack0x00000084,pBVar6);
                }
              }
              FUN_5bf2bd60((uint *)&stack0x00000430);
              cdr_Close(param_1);
            }
          }
          else {
            puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x4a9);
            _mbscpy(&stack0x00000124,puVar4);
            if ((*(uint *)(ptVar1 + 0x1a0) & 0x100) != 0) {
              _mbscat(&stack0x00000124,(uchar *)" (SCSI)");
            }
            puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x4a9);
            _mbscpy(&stack0x00000084,puVar4);
          }
        }
        if (*(int *)(ptVar1 + 0x1ac) < 1) {
          FUN_5bf25750(&stack0x00000224,"%s");
        }
        else {
          FUN_5bf25750(&stack0x00000224,(BYTE *)"%c: %s");
        }
        in_stack_00000048 = &stack0x00000224;
        in_stack_00000034 = 0xd;
        in_stack_0000003c = 0;
        in_stack_00000040 = 0;
        in_stack_00000044 = 0;
        in_stack_0000004c = 0x104;
        in_stack_00000050 = 0;
        in_stack_00000038 = wParam;
        in_stack_00000054 = wParam;
        SendMessageA(in_stack_000021b8,0x1007,0,(LPARAM)&stack0x00000034);
        in_stack_000000e8 = &stack0x00000124;
        in_stack_000000dc = 1;
        SendMessageA(in_stack_000021b8,0x102e,wParam,(LPARAM)&stack0x000000d4);
        in_stack_00000110 = &stack0x00000084;
        in_stack_00000104 = 2;
        SendMessageA(in_stack_000021b8,0x102e,wParam,(LPARAM)&stack0x000000fc);
        wParam = wParam + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uStack00000028);
  }
  return;
}


