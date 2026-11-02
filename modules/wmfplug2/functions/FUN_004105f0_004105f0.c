/* Module: wmfplug2.dll
   Function: FUN_004105f0
   Address: 004105f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_004105f0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  HANDLE hObject;
  HANDLE hHandle;
  HGLOBAL hMem;
  int *piVar5;
  DWORD DVar6;
  int *unaff_ESI;
  int *hHandle_00;
  uint **ppuVar7;
  int *piStack_10;
  int local_c;
  uint uStack_8;
  int *piStack_4;
  
  iVar4 = WMCreateIndexer();
  if (-1 < iVar4) {
    hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    if (hObject != (HANDLE)0x0) {
      hHandle = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      if (hHandle != (HANDLE)0x0) {
        hMem = GlobalAlloc(0x40,0x28);
        piVar5 = GlobalLock(hMem);
        if (piVar5 != (int *)0x0) {
          piVar5[2] = 1;
          *piVar5 = (int)&PTR_LAB_0047c5b8;
          uVar1 = *param_2;
          uVar2 = param_2[4];
          uStack_8 = param_2[1];
          uVar3 = param_2[5];
          piVar5[6] = uVar2 - uVar1;
          piVar5[8] = uVar1;
          piVar5[1] = 0;
          piVar5[3] = (int)hHandle;
          piVar5[4] = (int)&local_c;
          piVar5[7] = (uVar3 - uStack_8) - (uint)(uVar2 < uVar1);
          piVar5[9] = uStack_8;
          ppuVar7 = &param_2;
          param_2 = (uint *)0x0;
          hHandle_00 = piStack_10;
          iVar4 = (**(code **)*piStack_10)(piStack_10,&DAT_0047c0a8,ppuVar7);
          if ((-1 < iVar4) && (piStack_4 != (int *)0x0)) {
            (**(code **)(*piStack_4 + 0x14))(piStack_4,0,1,0,0);
            (**(code **)(local_c + 8))(&local_c);
          }
          iVar4 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,local_c,piVar5,&stack0xffffffe0);
          if (-1 < iVar4) {
            DVar6 = WaitForSingleObject(hHandle_00,0);
            while (DVar6 != 0) {
              WaitForSingleObject(hHandle,0xffffffff);
              ResetEvent(hHandle);
              iVar4 = (**(code **)(local_c + 0x18))(&local_c,ppuVar7,(int)ppuVar7 >> 0x1f);
              if (iVar4 < 0) {
                piVar5[1] = 1;
                break;
              }
              DVar6 = WaitForSingleObject(hHandle_00,0);
            }
            WaitForSingleObject(hHandle_00,0xffffffff);
          }
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        CloseHandle(hHandle);
      }
      CloseHandle(hObject);
    }
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 8))();
    }
  }
  return iVar4;
}


