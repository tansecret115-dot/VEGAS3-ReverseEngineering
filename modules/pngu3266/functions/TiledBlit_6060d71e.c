/* Module: pngu3266.dll
   Function: TiledBlit
   Address: 6060d71e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNDC::TiledBlit(class CPNImage *,long,long,long,long,long,long,long) */

void __thiscall
XPNDC::TiledBlit(XPNDC *this,CPNImage *param_1,long param_2,long param_3,long param_4,long param_5,
                long param_6,long param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  CPNMemoryDC local_218 [500];
  undefined4 local_24;
  undefined4 local_20;
  long local_1c;
  long local_18;
  XPNDC *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
                    /* 0x1d71e  2087  ?TiledBlit@XPNDC@@QAEXPAVCPNImage@@JJJJJJJ@Z */
  lVar1 = param_4;
  if (param_1 != (CPNImage *)0x0) {
    local_c = 0;
    local_8 = 0;
    local_14 = this;
    (**(code **)(*(int *)param_1 + 0x40))(&local_c);
    if ((0 < local_c) && (0 < local_8)) {
      ceil((double)(param_4 - param_2) / (double)local_c);
      local_10 = ftol();
      ceil((double)(param_5 - param_3) / (double)local_8);
      uVar2 = ftol();
      local_24 = 0;
      local_20 = 0;
      local_1c = param_4;
      local_18 = param_5;
      CPNMemoryDC::CPNMemoryDC(local_218,(CPNDC *)local_14,(CPNxRect *)&local_24);
      param_2 = 0;
      if (local_10 != 0) {
        do {
          param_4 = 0;
          if (uVar2 != 0) {
            do {
              CPNDC::Blit((CPNDC *)local_218,param_1,param_2 * local_c,param_4 * local_8,lVar1,
                          param_5,0,0,10);
              param_4 = param_4 + 1;
            } while ((uint)param_4 < uVar2);
          }
          param_2 = param_2 + 1;
        } while ((uint)param_2 < local_10);
      }
      CPNMemoryDC::BlitToScreen(local_218);
      CPNMemoryDC::~CPNMemoryDC(local_218);
    }
  }
  return;
}


