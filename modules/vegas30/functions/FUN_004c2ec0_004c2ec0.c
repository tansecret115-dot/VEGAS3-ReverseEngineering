/* Module: vegas30.exe
   Function: FUN_004c2ec0
   Address: 004c2ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004c2f89) */

void FUN_004c2ec0(int param_1,HDC param_2,int *param_3,int *param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  HGDIOBJ h;
  uint x;
  longlong lVar4;
  
  iVar1 = *param_4;
  h = (HGDIOBJ)_SfGetUIPenWithStyle_8(param_5,(-(uint)(param_6 != 0) & 0xfffffffe) + 2);
  SelectObject(param_2,h);
  param_6 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_4[2] + param_6 * 4);
      if ((*(byte *)(iVar2 + 0x20) & 1) == 0) {
        if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
          x = 0xffffffff;
        }
        else {
          lVar4 = ftol();
          uVar3 = lVar4 + *(int *)(param_1 + 0xac0);
          x = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < x)))
             ) {
            if (0x3fff < (longlong)uVar3) {
              x = 0x3fff;
            }
          }
          else {
            x = 0xffffc000;
          }
        }
        *(uint *)(iVar2 + 0x14) = x;
        if ((*param_3 <= (int)x) && ((int)x < param_3[2])) {
          MoveToEx(param_2,x,param_3[1],(LPPOINT)0x0);
          LineTo(param_2,*(int *)(iVar2 + 0x14),param_3[3]);
        }
      }
      param_6 = param_6 + 1;
    } while (param_6 < iVar1);
  }
  return;
}


