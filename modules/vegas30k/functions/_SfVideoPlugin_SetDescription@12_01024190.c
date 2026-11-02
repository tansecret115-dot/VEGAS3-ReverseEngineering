/* Module: vegas30k.dll
   Function: _SfVideoPlugin_SetDescription@12
   Address: 01024190
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoPlugin_SetDescription_12(LPCSTR param_1,DWORD param_2,int *param_3)

{
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_164;
  int local_160;
  HKEY local_15c;
  CHAR local_158 [40];
  int local_130 [10];
  CHAR local_108 [259];
  undefined1 local_5;
  
                    /* 0x24190  1274  _SfVideoPlugin_SetDescription@12 */
  FUN_01024030(param_3,local_158,0x28,1);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,"CLSID",0,0x20019,&local_15c);
  if (LVar1 == 0) {
    RegSetValueA(local_15c,local_158,1,param_1,param_2);
    RegCloseKey(local_15c);
  }
  local_160 = _SfMetric_Open_16(&local_164,"DXImageTransCache",0x1000000,"Plug-In Description");
  if (-1 < local_160) {
    iVar2 = _SfGetMetric_8(local_164,2);
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        piVar5 = local_130;
        for (iVar3 = 0x4c; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        iVar3 = _SfGetMetricBinary_16(local_164,iVar4 + 3,local_130,0x130);
        if (iVar3 == 0x130) {
          iVar3 = 4;
          bVar7 = true;
          piVar5 = param_3;
          piVar6 = local_130;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar7 = *piVar5 == *piVar6;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            lstrcpynA(local_108,param_1,0x104);
            local_5 = 0;
            local_160 = _SfSetMetricBinary_16(local_164,iVar4 + 3,local_130,0x130);
            break;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    _SfMetric_Close_4(local_164);
  }
  return local_160;
}


