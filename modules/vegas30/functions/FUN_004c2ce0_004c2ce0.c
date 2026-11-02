/* Module: vegas30.exe
   Function: FUN_004c2ce0
   Address: 004c2ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004c2da9) */
/* WARNING: Removing unreachable block (ram,0x004c2e6b) */

void FUN_004c2ce0(int param_1,HDC param_2,int *param_3,int *param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  HGDIOBJ h;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = *param_4;
  h = (HGDIOBJ)_SfGetUIPenWithStyle_8(param_5,(-(uint)(param_6 != 0) & 0xfffffffe) + 2);
  SelectObject(param_2,h);
  param_6 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_4[2] + param_6 * 4);
      if ((*(byte *)(iVar2 + 0x20) & 1) != 0) {
        if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          lVar5 = ftol();
          uVar3 = lVar5 + *(int *)(param_1 + 0xac0);
          uVar4 = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar4)))) {
            if (0x3fff < (longlong)uVar3) {
              uVar4 = 0x3fff;
            }
          }
          else {
            uVar4 = 0xffffc000;
          }
        }
        *(uint *)(iVar2 + 0x14) = uVar4;
        if ((*param_3 <= (int)uVar4) && ((int)uVar4 < param_3[2])) {
          MoveToEx(param_2,uVar4,param_3[1],(LPPOINT)0x0);
          LineTo(param_2,*(int *)(iVar2 + 0x14),param_3[3]);
        }
        if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          lVar5 = ftol();
          uVar3 = lVar5 + *(int *)(param_1 + 0xac0);
          uVar4 = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar4)))) {
            if (0x3fff < (longlong)uVar3) {
              uVar4 = 0x3fff;
            }
          }
          else {
            uVar4 = 0xffffc000;
          }
        }
        if ((*param_3 <= (int)uVar4) && ((int)uVar4 < param_3[2])) {
          MoveToEx(param_2,uVar4,param_3[1],(LPPOINT)0x0);
          LineTo(param_2,uVar4,param_3[3]);
        }
      }
      param_6 = param_6 + 1;
    } while (param_6 < iVar1);
  }
  return;
}


