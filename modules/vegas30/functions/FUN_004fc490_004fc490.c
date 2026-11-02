/* Module: vegas30.exe
   Function: FUN_004fc490
   Address: 004fc490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fc490(int param_1,int param_2,int param_3)

{
  int iVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  
  iVar2 = param_1;
  if ((((*(uint *)(param_1 + 0xc) & 0x400) != 0) || (param_2 != *(int *)(param_1 + 0x70))) ||
     (param_3 != *(int *)(param_1 + 0x74))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffdf;
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int **)(param_1 + 0x17c) == (int *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = **(int **)(param_1 + 0x17c);
    }
    if (0 < param_1) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0x17c) + 8) + iVar4 * 4);
        pt.y = param_3;
        pt.x = param_2;
        BVar3 = PtInRect((RECT *)(iVar1 + 0x108),pt);
        if (BVar3 != 0) {
          *(int *)(iVar2 + 0x7c) = iVar4;
          *(int *)(iVar2 + 0x80) = iVar1;
          param_1 = 0x100;
          pt_00.y = param_3;
          pt_00.x = param_2;
          BVar3 = PtInRect((RECT *)(iVar1 + 0x120),pt_00);
          if (BVar3 == 0) {
            pt_01.y = param_3;
            pt_01.x = param_2;
            BVar3 = PtInRect((RECT *)(iVar1 + 0x130),pt_01);
            if (BVar3 == 0) {
              pt_02.y = param_3;
              pt_02.x = param_2;
              BVar3 = PtInRect((RECT *)(iVar1 + 0x140),pt_02);
              if (BVar3 != 0) {
                param_1 = 0x103;
              }
            }
            else {
              param_1 = 0x102;
            }
          }
          else {
            param_1 = 0x101;
          }
          *(int *)(iVar2 + 0x6c) = param_1;
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
    *(int *)(iVar2 + 0x70) = param_2;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffbff;
    *(int *)(iVar2 + 0x74) = param_3;
    FUN_004fc5c0(iVar2);
  }
  return;
}


