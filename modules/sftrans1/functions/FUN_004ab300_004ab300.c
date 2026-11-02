/* Module: sftrans1.dll
   Function: FUN_004ab300
   Address: 004ab300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ab300(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  HWND hWnd;
  HWND hWnd_00;
  LRESULT LVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  int local_114;
  int local_110;
  int local_10c;
  CHAR local_104 [260];
  
  uVar3 = param_3 >> 0x10;
  GetDlgItem((HWND)param_1[0xc],0x41e);
  hWnd = GetDlgItem((HWND)param_1[0xc],0x423);
  hWnd_00 = GetDlgItem((HWND)param_1[0xc],0x42a);
  param_3 = param_3 & 0xffff;
  if (param_3 < 0x452) {
    if (param_3 == 0x451) {
      if (uVar3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00557828 <= fVar4) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar4 <= (float10)_DAT_00555908) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar4 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar4 = (float10)_DAT_00557828;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0x13])) {
          param_1[0x13] = (int)(float)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
    else {
      switch(param_3) {
      case 1000:
        break;
      default:
        return 0;
      case 0x423:
        SendMessageA(hWnd,0x702,0,(LPARAM)&local_114);
        param_1[0xfd] = local_114;
        param_1[0xfe] = local_110;
        param_1[0xff] = local_10c;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      case 0x42a:
        LVar1 = SendMessageA(hWnd_00,0x147,0,0);
        switch(LVar1) {
        case 0:
          if (param_1[0xf7] != 0) {
            param_1[0xf6] = 0;
            param_1[0xf7] = 0;
            param_1[0x16] = 4;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e4ccccd;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x40000000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 5;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e99999a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3f2b851f;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3f30a3d7;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f6e147b;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x40000000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 2;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e0f5c29;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e23d70a;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e3851ec;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f0ccccd;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 0;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d4ccccd;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3ef5c28f;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e4ccccd;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e75c28f;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3f28f5c3;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d99999a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3ef5c28f;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e4ccccd;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e75c28f;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3f3851ec;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 0;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3ca3d70a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3ee147ae;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3f19999a;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f19999a;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fc3d70a;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 4;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d75c28f;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3ed70a3d;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e3851ec;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f000000;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fd9999a;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e99999a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e8f5c29;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3eb851ec;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3df5c28f;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3ff33333;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 2;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e6147ae;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3de147ae;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3d4ccccd;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e051eb8;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f19999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3ff47ae1;
            param_1[0xf6] = param_1[0xf6] + 1;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
          break;
        case 1:
          if (param_1[0xf7] != 1) {
            FUN_004a88b0();
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
          break;
        case 2:
          if (param_1[0xf7] != 2) {
            param_1[0xf6] = 0;
            param_1[0xf7] = 2;
            param_1[0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3dcccccd;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e428f5c;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e75c28f;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3eae147b;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = -0x416b851f;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 4;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e23d70a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3fcccccd;
            param_1[param_1[0xf6] * 7 + 0x19] = 0;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 5;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e99999a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3f2b851f;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3f30a3d7;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f6e147b;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x40000000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 2;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e0f5c29;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e23d70a;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e3851ec;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3f0ccccd;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 0;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d75c28f;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3ec7ae14;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e99999a;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e99999a;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3ef5c28f;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e0f5c29;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e851eb8;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e4ccccd;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e4ccccd;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3f0f5c29;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d8f5c29;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e851eb8;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e4ccccd;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e4ccccd;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3f170a3d;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 0;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d4ccccd;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e0f5c29;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e851eb8;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3ef5c28f;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3f4ccccd;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 4;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3cf5c28f;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3eeb851f;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3f19999a;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3ebd70a4;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fa147ae;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3da3d70a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3c23d70a;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e0f5c29;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e851eb8;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fb47ae1;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 0;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d23d70a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3c23d70a;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e0f5c29;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e851eb8;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fbd70a4;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e0f5c29;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3c23d70a;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e0f5c29;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e851eb8;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fbd70a4;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 0;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d8f5c29;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3e3851ec;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e75c28f;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3da3d70a;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fd33333;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 4;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3d23d70a;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3ed1eb85;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e23d70a;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3d4ccccd;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x3fd5c28f;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3e4ccccd;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3c23d70a;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3e4ccccd;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3e75c28f;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f800000;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x40000000;
            iVar2 = param_1[0xf6];
            param_1[0xf6] = iVar2 + 1;
            param_1[(iVar2 + 1) * 7 + 0x16] = 1;
            param_1[param_1[0xf6] * 7 + 0x18] = 0x3ec7ae14;
            param_1[(param_1[0xf6] + 1) * 7 + 0x13] = 0x3da3d70a;
            param_1[param_1[0xf6] * 7 + 0x1b] = 0x3df5c28f;
            param_1[param_1[0xf6] * 7 + 0x1c] = 0x3dcccccd;
            param_1[param_1[0xf6] * 7 + 0x17] = 0x3f99999a;
            param_1[param_1[0xf6] * 7 + 0x19] = 0x4015c28f;
            param_1[0xf6] = param_1[0xf6] + 1;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
          break;
        case 3:
          if (param_1[0xf7] != 3) {
            FUN_004aa160();
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
          break;
        case 4:
          if (param_1[0xf7] != 4) {
            FUN_004aaa10();
          }
        }
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      case 0x44e:
        if (uVar3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if ((float10)_DAT_00555910 <= fVar4) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
            if (fVar4 <= (float10)_DAT_00555908) {
              fVar4 = (float10)FUN_004d6ed0(local_104,0);
            }
            else {
              fVar4 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar4 = (float10)_DAT_00555910;
          }
          if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0xfc])) {
            param_1[0xfc] = (int)(float)fVar4;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
        break;
      case 0x44f:
        if (uVar3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if ((float10)_DAT_00555910 <= fVar4) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
            if (fVar4 <= (float10)_DAT_00563b28) {
              fVar4 = (float10)FUN_004d6ed0(local_104,0);
            }
            else {
              fVar4 = (float10)_DAT_00563b28;
            }
          }
          else {
            fVar4 = (float10)_DAT_00555910;
          }
          if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0xf8])) {
            param_1[0xf8] = (int)(float)fVar4;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
        break;
      case 0x450:
        if (uVar3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if ((float10)_DAT_00555910 <= fVar4) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
            if (fVar4 <= (float10)_DAT_00555908) {
              fVar4 = (float10)FUN_004d6ed0(local_104,0);
            }
            else {
              fVar4 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar4 = (float10)_DAT_00555910;
          }
          if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0xfa])) {
            param_1[0xfa] = (int)(float)fVar4;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
    }
  }
  else {
    if (0x454 < param_3) {
      if (param_3 == 41000) {
        FUN_004c5940(1,param_1[0xc],0x3fe,0xf,0);
        return 0;
      }
      if (param_3 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (param_3 == 0x454) {
      if (uVar3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00555910 <= fVar4) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar4 <= (float10)_DAT_00555908) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar4 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar4 = (float10)_DAT_00555910;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0xf9])) {
          param_1[0xf9] = (int)(float)fVar4;
          goto LAB_004ac7eb;
        }
      }
    }
    else if (param_3 == 0x452) {
      if (uVar3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00557828 <= fVar4) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar4 <= (float10)_DAT_00555908) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar4 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar4 = (float10)_DAT_00557828;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0x14])) {
          param_1[0x14] = (int)(float)fVar4;
          goto LAB_004ac7eb;
        }
      }
    }
    else {
      if (param_3 != 0x453) {
        return 0;
      }
      if (uVar3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00557828 <= fVar4) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar4 <= (float10)_DAT_00555908) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar4 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar4 = (float10)_DAT_00557828;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0xfb])) {
          param_1[0xfb] = (int)(float)fVar4;
LAB_004ac7eb:
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
  }
  FUN_004aca30();
  return 0;
}


