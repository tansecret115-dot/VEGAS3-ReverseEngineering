/* Module: pngu3266.dll
   Function: GradientFillRectangle
   Address: 60609f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::GradientFillRectangle(class CPNDC *,class CPNxRect
   const &,class CPNColor const &,class CPNColor const &,int) */

void __cdecl
CPNDrawHelper::GradientFillRectangle
          (CPNDC *param_1,CPNxRect *param_2,CPNColor *param_3,CPNColor *param_4,int param_5)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  CPNScreenDC local_438 [480];
  CPNMemoryDC local_258 [463];
  HDC local_89;
  CPNColor local_64 [32];
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x19f60  1431
                       ?GradientFillRectangle@CPNDrawHelper@@SAXPAVCPNDC@@ABVCPNxRect@@ABVCPNColor@@2H@Z
                        */
  iVar4 = 0;
  if (param_5 == 0) {
    iVar5 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4);
  }
  else {
    iVar5 = *(int *)(param_2 + 8) - *(int *)param_2;
  }
  local_2c = (double)(byte)param_3[0x1c];
  local_1c = (double)(byte)param_3[0x1e];
  local_24 = (double)(byte)param_3[0x1d];
  local_3c = (double)iVar5;
  local_44 = ((double)(byte)param_4[0x1c] - local_2c) / local_3c;
  local_34 = ((double)(byte)param_4[0x1e] - local_1c) / local_3c;
  local_3c = ((double)(byte)param_4[0x1d] - local_24) / local_3c;
  CPNColor::CPNColor(local_64);
  local_8 = 1;
  if (param_5 == 0) {
    local_c = local_8;
    local_8 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4);
  }
  else {
    local_c = *(int *)(param_2 + 8) - *(int *)param_2;
  }
  local_14 = 0;
  local_10 = 0;
  CPNScreenDC::CPNScreenDC(local_438);
  CPNMemoryDC::CPNMemoryDC(local_258,(CPNDC *)local_438,(CPNxRect *)&local_14);
  if (0 < iVar5) {
    do {
      uVar1 = ftol();
      uVar2 = ftol();
      uVar3 = ftol();
      CPNColor::Set(local_64,uVar3,uVar2,uVar1);
      local_2c = local_44 + local_2c;
      local_1c = local_34 + local_1c;
      local_24 = local_3c + local_24;
      if (param_5 == 0) {
        iVar6 = 0;
        lVar7 = iVar4;
      }
      else {
        iVar6 = iVar4;
        lVar7 = 0;
      }
      CPNDC::SetPixel((CPNDC *)local_258,iVar6,lVar7,local_64);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  StretchBlt(*(HDC *)(param_1 + 0x1cf),*(int *)param_2,*(int *)(param_2 + 4),
             *(int *)(param_2 + 8) - *(int *)param_2,*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)
             ,local_89,local_14,local_10,local_c - local_14,local_8 - local_10,0xcc0020);
  CPNMemoryDC::~CPNMemoryDC(local_258);
  CPNScreenDC::~CPNScreenDC(local_438);
  CPNColor::~CPNColor(local_64);
  return;
}


