/* Module: sftrkfx1.dll
   Function: FUN_5cba99e0
   Address: 5cba99e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba99e0(uint param_1,int param_2,HDC param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int x;
  int iVar4;
  uint uVar5;
  int mode;
  UINT align;
  int iVar6;
  int *piVar7;
  int local_18;
  int local_14;
  RECT local_10;
  
  uVar3 = param_1;
  if (*(int *)(param_2 + 0x28) != 0) {
    FUN_5cba9850(param_1,param_2,param_2 + 0x30,&local_18);
    uVar5 = *(uint *)(param_2 + 0x28);
    param_1 = 0;
    if (uVar5 != 0) {
      piVar7 = (int *)(param_2 + 0x4c);
      do {
        iVar4 = local_14;
        x = local_18;
        uVar1 = param_1 + 1;
        if (uVar1 < uVar5) {
          FUN_5cba9850(uVar3,param_2,piVar7 + 1,&local_18);
        }
        if (*(int *)(uVar3 + 0x4084) == 0) {
          if (*param_5 <= x + 4) {
            if ((param_1 < *(uint *)(uVar3 + 0x5c)) ||
               (*(int *)(uVar3 + 0x60) + *(uint *)(uVar3 + 0x5c) <= param_1)) {
              iVar6 = 0;
            }
            else {
              iVar6 = 8;
            }
            BitBlt(param_3,x + -4,iVar4 + -4,8,8,*(HDC *)(uVar3 + 0x28),*(int *)(uVar3 + 0x38),
                   *(int *)(uVar3 + 0x3c) + (-(uint)(piVar7[-2] != 0) & 0xfffffff0) + 0x10 + iVar6,
                   0xcc0020);
            if (*piVar7 != 0) {
              local_10.left = x + -7;
              local_10.top = iVar4 + -7;
              local_10.right = x + 7;
              local_10.bottom = iVar4 + 7;
              DrawFocusRect(param_3,&local_10);
            }
LAB_5cba9c1a:
            if (*(int *)(uVar3 + 0x20) + *(int *)(uVar3 + 0x1c) < piVar7[-7]) {
              return;
            }
          }
        }
        else if (*param_5 <= *(int *)(uVar3 + 0x4088) + x) {
          iVar6 = *piVar7;
          iVar2 = piVar7[-2];
          mode = GetBkMode(param_3);
          SetBkMode(param_3,1);
          align = GetTextAlign(param_3);
          SetTextAlign(param_3,6);
          SetTextColor(param_3,0xffffff);
          TextOutA(param_3,x,iVar4 - *(int *)(uVar3 + 0x408c) / 2,(LPCSTR)(uVar3 + 0x409e),1);
          TextOutA(param_3,x + 1,iVar4 - *(int *)(uVar3 + 0x408c) / 2,(LPCSTR)(uVar3 + 0x409f),1);
          SetTextColor(param_3,-(uint)(iVar6 != 0) & 200);
          TextOutA(param_3,x,iVar4 - *(int *)(uVar3 + 0x408c) / 2,
                   (LPCSTR)((uint)(iVar2 != 0) * 7 + param_1 + 0x4090 + uVar3),1);
          SetTextAlign(param_3,align);
          SetBkMode(param_3,mode);
          goto LAB_5cba9c1a;
        }
        piVar7 = piVar7 + 8;
        uVar5 = *(uint *)(param_2 + 0x28);
        param_1 = uVar1;
      } while (uVar1 < uVar5);
    }
  }
  return;
}


