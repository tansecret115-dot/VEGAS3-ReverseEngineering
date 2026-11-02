/* Module: pngu3266.dll
   Function: _PNGuiCallWndProc@20
   Address: 605f61cb
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PNGuiCallWndProc_20
               (CPNWindow *param_1,undefined4 param_2,ulong param_3,uint param_4,long param_5)

{
                    /* 0x61cb  2218  _PNGuiCallWndProc@20 */
  CPNWindow::WindowProc(param_1,param_3,param_4,param_5);
  return;
}


